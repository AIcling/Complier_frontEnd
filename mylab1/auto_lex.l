
%{
enum yytokentype {
	num_INT = 258,
	num_FLOAT = 259,

	Y_ID = 260,

	Y_INT = 261,
	Y_VOID = 262,
	Y_CONST = 263,
	Y_IF = 264,
	Y_ELSE = 265,
	Y_WHILE = 266,
	Y_BREAK = 267,
	Y_CONTINUE = 268,
	Y_RETURN = 269,

	Y_ADD = 270,
	Y_SUB = 271,
	Y_MUL = 272,
	Y_DIV = 273,
	Y_MODULO = 274,
	Y_LESS = 275,
	Y_LESSEQ = 276,
	Y_GREAT = 277,
	Y_GREATEQ = 278,
	Y_NOTEQ = 279,
	Y_EQ = 280,
	Y_NOT = 281,
	Y_AND = 282,
	Y_OR = 283,
	Y_ASSIGN = 284,

	Y_LPAR = 285,
	Y_RPAR = 286,
	Y_LBRACKET = 287,
	Y_RBRACKET = 288,
	Y_LSQUARE = 289,
	Y_RSQUARE = 290,
	Y_COMMA = 291,
	Y_SEMICOLON = 292,

	Y_FLOAT = 293,
	Y_EOF = 294,
	Y_FOR = 295
};
typedef union _YYLVAL{
	int	token;
	int	int_value;
	float   float_value;
	char*	id_name;
}_YYLVAL;

_YYLVAL yylval;
%}

%%
"0xb"   {return 11;}
"for"	{return Y_FOR;}
"int"	{return Y_INT;}
"float"	{return Y_FLOAT;}
"void"	{return Y_VOID;}
"const"	{return Y_CONST;}
"if"	{return Y_IF;}
"else"	{return Y_ELSE;}
"while"	{return Y_WHILE;}
"break"	{return Y_BREAK;}
"continue"	{return Y_CONTINUE;}
"return"	{return Y_RETURN;}
[0-9]+	{yylval.int_value = atoi(yytext); return num_INT; }
[0-9]+"."[0-9]+	{yylval.float_value = strtof(yytext,NULL); return num_FLOAT;}
[_A-Za-z]+[_a-zA-Z0-9]*	{return Y_ID;}

"+"	{ return Y_ADD; }
"-"	{ return Y_SUB; }
"*"	{ return Y_MUL; }
"/"	{ return Y_DIV; }
"%"	{return Y_MODULO;}
"<"	{return Y_LESS;}
"<="	{return Y_LESSEQ;}
">"	{return Y_GREAT;}
">="	{return Y_GREATEQ;}
"!="	{return Y_NOTEQ;}
"=="	{return Y_EQ;}
"!"	{return Y_NOT;}
"&&"	{return Y_AND;}
"||"	{return Y_OR;}
"="	{return Y_ASSIGN;}

"("	{return Y_LPAR;}
")"	{return Y_RPAR;}
"{"	{return Y_LBRACKET;}
"}"	{return Y_RBRACKET;}
"["	{return Y_LSQUARE;}
"]"	{return Y_RSQUARE;}
","	{return Y_COMMA;}
";"	{return Y_SEMICOLON;}
[ \t\n]	{}
"//".*[\n] {}
%%



int main(int argc, char** argv)
{
    int token;
    //printf("%d",argc);
    while(token = yylex())
    {
      if(token == 11){
		printf("<%d, 11>\n",258);
	  }
      if(token<=269&&token>=261){
        printf("<%d, KEYWORD>\n",token);
     }
		  if(token==Y_ID||token==num_FLOAT||token==num_INT){
        printf("<%d, %s>\n",token, yytext);
      }
     if(token<=292&&token>=285){
       printf("<%d, SYMBOL>\n",token);
         }
    if(token<=284&&token>=270){
       printf("<%d, OPERATOR>\n",token);
         }
    }

}

int yywrap(){
	return 1;
}



