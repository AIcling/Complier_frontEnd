%{
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ast.h"

#define         NOINT   __INT_MAX__


int yylex();
void yyerror(char *);
extern char* yytext;
static int count = 1;
past cur;

%}

/* Bison declarations */
%union{
    int     number;
    char    str[50];
    past    pAst;
};

%token      <str>       ID
%token      <number>    INTEGER

%token                  INT
%token      <str>       VOID		 
%token      <str>       CONST		 
%token      <str>       IF			 
%token      <str>       ELSE		 
%token      <str>       WHILE		 
%token      <str>       BREAK		 
%token      <str>       CONTINUE	 
%token      <str>       RETURN
%token      <str>       LESSEQ GREATEQ NOTEQ EQ AND OR

%type       <pAst>      _CompUnit CompUnit Decl ConstDecl _ConstDecl ConstDef _ConstDef ConstInitVal _ConstInitVal
%type       <pAst>      VarDecl _VarDecl VarDef _VarDef InitVal _InitVal
%type       <pAst>      FuncDef FuncFParams _FuncFParams FuncFParam _FuncFParam
%type       <pAst>      Block _Block BlockItem Stmt ElseStmt Exp Cond LVal _LVal PrimaryExp
%type       <pAst>      Number UnaryExp FuncRParams _FuncRParams
%type       <pAst>      MulExp AddExp RelExp EqExp LAndExp LOrExp ConstExp

/* Grammar rules */
%%
_CompUnit: CompUnit             {root = $$; $$ = $1;}
         ;

CompUnit: Decl CompUnit         {$$ = ListNode($1,$2);}
        | FuncDef CompUnit      {$$ = ListNode($1,$2);}
        | Decl                  {$$ = $1;}
        | FuncDef               {$$ = $1;}
        ;

Decl: ConstDecl                 {$$ = newNode("Decl",strdup("const int"),NOINT,NULL,$1,NULL);}
    | VarDecl                   {$$ = newNode("Decl",strdup("int"),NOINT,NULL,$1,NULL);}
    ;

ConstDecl: CONST INT _ConstDecl ';'     {$$ = $3;}
         ;

_ConstDecl: ConstDef ',' _ConstDecl     {$$ = ListNode($1,$3);}
          | ConstDef                    {$$ = $1;}
          ;

ConstDef: ID _ConstDef '=' ConstInitVal         {$$ = newNode("ConstDef",strdup($1),NOINT,NULL,$2,$4);}
        | ID '=' ConstInitVal                   {$$ = newNode("ConstDef",strdup($1),NOINT,NULL,$3,NULL);}
        ;

_ConstDef: '[' ConstExp ']'  _ConstDef          {$$ = ListNode($2,$4);}
         | '[' ConstExp ']'                     {$$ = $2;}
         ;

ConstInitVal: ConstExp	                        {$$ = newNode("ConstInitVal",NULL,NOINT,NULL,$1,NULL);}  
	    | '{' _ConstInitVal '}'             {$$ = newNode("ConstInitVal",NULL,NOINT,NULL,$2,NULL);}  
            | '{' '}'                           {$$ = newNode("noConstInitVal",NULL,NOINT,NULL,NULL,NULL);}  
            ;

_ConstInitVal: ConstInitVal ',' _ConstInitVal   {$$ = ListNode($1,$3);}
             | ConstInitVal                     {$$ = $1;}
             ;

VarDecl: INT _VarDecl ';'               {$$ = $2;}
       ;
 
_VarDecl: VarDef ',' _VarDecl            {$$ = ListNode($1,$3);}
        | VarDef                        {$$ = $1;}
        ;

VarDef: ID                              {$$ = newNode("VarDef",strdup($1),NOINT,NULL,NULL,NULL);}
      | ID _VarDef                      {$$ = newNode("VarDef",strdup($1),NOINT,NULL,$2,NULL);}
      | ID '=' InitVal                  {$$ = newNode("VarDef",strdup($1),NOINT,NULL,$3,NULL);}
      | ID _VarDef '=' InitVal          {$$ = newNode("VarDef",strdup($1),NOINT,NULL,$2,$4);}
      ;

_VarDef: '[' ConstExp ']' _VarDef               {$$ = ListNode($2,$4);}
       | '[' ConstExp ']'                       {$$ = $2;}
       ;

InitVal: Exp                            {$$ = newNode("InitVal",NULL,NOINT,NULL,$1,NULL);}  
       | '{' _InitVal '}'               {$$ = newNode("InitVal",NULL,NOINT,NULL,$2,NULL);}  
       | '{' '}'                        {$$ = newNode("noInitVal",NULL,NOINT,NULL,NULL,NULL);}  
       ;

_InitVal: InitVal ',' _InitVal           {$$ = ListNode($1,$3);}
        | InitVal                        {$$ = $1;}
        ;

FuncDef: VOID ID '(' FuncFParams ')' Block      {$$ = newNode("FuncDef  void",strdup($2),NOINT,NULL,$4,$6);}
       | INT ID '(' FuncFParams ')' Block       {$$ = newNode("FuncDef  int",strdup($2),NOINT,NULL,$4,$6);}
       | VOID ID '(' ')' Block                  {$$ = newNode("FuncDef  void",strdup($2),NOINT,NULL,$5,NULL);}
       | INT ID '(' ')' Block                   {$$ = newNode("FuncDef  int",strdup($2),NOINT,NULL,$5,NULL);}
       ;

FuncFParams: _FuncFParams            {$$ = $1;}
           ;

_FuncFParams: FuncFParam ',' _FuncFParams       {$$ = ListNode($1,$3);}
            | FuncFParam                        {$$ = $1;}
            ;

FuncFParam: INT ID '[' ']'                      {$$ = newNode("FuncFParam  int",strdup($2),NOINT,NULL,NULL,NULL);}
          | INT ID '[' ']' _FuncFParam          {$$ = newNode("FuncFParam  int",strdup($2),NOINT,NULL,$5,NULL);}
          | INT ID                              {$$ = newNode("FuncFParam  int",strdup($2),NOINT,NULL,NULL,NULL);}
          ;

_FuncFParam: '[' Exp ']' _FuncFParam            {$$ = ListNode($2,$4);}
           | '[' Exp ']'                        {$$ = $2;}
           ;

Block: '{' _Block '}'           {$$ = newNode("Block",NULL,NOINT,NULL,$2,NULL);}
     | '{' '}'                  {$$ = newNode("noBlock",NULL,NOINT,NULL,NULL,NULL);}
     ;

_Block: BlockItem _Block        {$$ = ListNode($1,$2);}
      | BlockItem               {$$ = $1;}
      ;

BlockItem: Decl                 {$$ = $1;}
         | Stmt                 {$$ = $1;}
         ;

Stmt: LVal '=' Exp ';'                  {$$ = newNode("AssignStmt",NULL,NOINT,NULL,$1,$3);}
    | Exp ';'                           {$$ = newNode("ExpStmt",NULL,NOINT,NULL,$1,NULL);}
    | ';'                               {$$ = newNode("noStmt",NULL,NOINT,NULL,NULL,NULL);}
    | Block                             {$$ = $1;}
    | IF '(' Cond ')' Stmt ElseStmt     {$$ = newNode("IfStmt",NULL,NOINT,$6,$3,$5);}
    | IF '(' Cond ')' Stmt              {$$ = newNode("IfStmt",NULL,NOINT,NULL,$3,$5);}
    | WHILE '(' Cond ')' Stmt           {$$ = newNode("WhileStmt",NULL,NOINT,NULL,$3,$5);}
    | BREAK ';'                         {$$ = newNode("BreakStmt",NULL,NOINT,NULL,NULL,NULL);}
    | CONTINUE ';'                      {$$ = newNode("ContinueStmt",NULL,NOINT,NULL,NULL,NULL);}
    | RETURN Exp ';'                    {$$ = newNode("ReturnStmt",NULL,NOINT,NULL,$2,NULL);}
    | RETURN ';'                        {$$ = newNode("ReturnStmt",NULL,NOINT,NULL,NULL,NULL);}
    ;

ElseStmt: ELSE Stmt                     {$$ = newNode("ElseStmt",NULL,NOINT,NULL,$2,NULL);}  
        ;

Exp: AddExp                     {$$ = $1;}
   ;

Cond: LOrExp                    {$$ = $1;}
    ;

LVal: ID                        {$$ = newNode("LVal",strdup($1),NOINT,NULL,NULL,NULL);}
    | ID _LVal                  {$$ = newNode("LVal",strdup($1),NOINT,NULL,$2,NULL);}
    ;

_LVal: '[' Exp ']' _LVal        {$$ = ListNode($2,$4);}
     | '[' Exp ']'              {$$ = $2;}
     ;

PrimaryExp: '(' Exp ')'         {$$ = $2;}
          | LVal                {$$ = $1;}
          | Number              {$$ = $1;}   
          ;

Number: INTEGER                 {$$ = newNode("Integer",NULL,$1,NULL,NULL,NULL);}
      ;
      
UnaryExp: PrimaryExp                    {$$ = newNode("UnaryExp",NULL,NOINT,NULL,$1,NULL);}   
        | ID '(' FuncRParams ')'        {$$ = newNode("UnaryExp",strdup($1),NOINT,NULL,$3,NULL);}
        | ID '(' ')'                    {$$ = newNode("UnaryExp",strdup($1),NOINT,NULL,NULL,NULL);}
	| '+' UnaryExp                  {$$ = newNode("UnaryExp",strdup("+"),NOINT,NULL,$2,NULL);}
        | '-' UnaryExp                  {$$ = newNode("UnaryExp",strdup("-"),NOINT,NULL,$2,NULL);}
        | '!' UnaryExp                  {$$ = newNode("UnaryExp",strdup("!"),NOINT,NULL,$2,NULL);}
        ;

FuncRParams: _FuncRParams               {$$ = newNode("FuncRParams",NULL,NOINT,NULL,$1,NULL);}
           ;

_FuncRParams: _FuncRParams ',' Exp      {$$ = ListNode($1,$3);}
            | Exp                       {$$ = $1;}
            ;

MulExp: UnaryExp                        {$$ = $1;}
      | UnaryExp '*' MulExp             {$3->id = strdup("*");$$ = ListNode($1,$3);}
      | UnaryExp '/' MulExp             {$3->id = strdup("/");$$ = ListNode($1,$3);}
      | UnaryExp '%' MulExp             {$3->id = strdup("%");$$ = ListNode($1,$3);}
      ;

AddExp: MulExp                          {$$ = $1;}
      | MulExp '+' AddExp               {$3->id = strdup("+");$$ = ListNode($1,$3);}
      | MulExp '-' AddExp               {$3->id = strdup("-");$$ = ListNode($1,$3);}
      ;

RelExp: AddExp                          {$$ = $1;}
      | AddExp '<' RelExp               {$3->id = strdup("<");$$ = ListNode($1,$3);}
      | AddExp '>' RelExp               {$3->id = strdup(">");$$ = ListNode($1,$3);}
      | AddExp LESSEQ RelExp            {$3->id = strdup($2);$$ = ListNode($1,$3);}
      | AddExp GREATEQ RelExp           {$3->id = strdup($2);$$ = ListNode($1,$3);}
      ;

EqExp: RelExp                           {$$ = $1;}
     | RelExp EQ EqExp                  {$3->id = strdup($2);$$ = ListNode($1,$3);}
     | RelExp NOTEQ EqExp               {$3->id = strdup($2);$$ = ListNode($1,$3);}
     ;

LAndExp: EqExp                          {$$ = $1;}
       | EqExp AND LAndExp              {$3->id = strdup($2);$$ = ListNode($1,$3);}
       ;

LOrExp: LAndExp                         {$$ = $1;}
      | LAndExp OR LOrExp               {$3->id = strdup($2);$$ = ListNode($1,$3);}
      ;

ConstExp: AddExp                        {$$ = $1;}
        ;

%%

/* Epilogue */

