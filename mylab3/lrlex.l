%{
#include <string.h>
#include "ast.h"
#include "lrparser.tab.h"

%}

%%
(int)		            	return INT;
(void)                  	return VOID;
(const)                 	return CONST;
(if)                    	return IF;
(else)                  	return ELSE;
(while)                 	return WHILE;
(break)                 	return BREAK;
(continue)              	return CONTINUE;
(return)                	return RETURN;

[a-zA-Z_][0-9a-zA-Z_]*      strcpy(yylval.str,yytext); return ID;
"0x"|"oX"|[0-9][0-9]*       yylval.number = atoi(yytext); return INTEGER;

"+"                         return '+';
"-"                         return '-';
"*"                         return '*';
"/"/[^/]                    return '/';
"%"                         return '%';
"<"/[^=]                    return '<';
"<="                        strcpy(yylval.str,yytext);return LESSEQ;
">"/[^=]                    return '>';
">="                        strcpy(yylval.str,yytext);return GREATEQ;
"!="                        strcpy(yylval.str,yytext);return NOTEQ;
"=="                        strcpy(yylval.str,yytext);return EQ;
"!"/[^=]                    return '!';
"&&"                        strcpy(yylval.str,yytext);return AND;
"||"                        strcpy(yylval.str,yytext);return OR;
"="/[^=]                    return '=';
"("                         return '(';
")"                         return ')';
"{"                         return '{';
"}"                         return '}';
"["                         return '[';
"]"                         return ']';
","                         return ',';
";"                         return ';'; 

\/\/(.)*\n					{}
\/\*(.|\n)*?\*\/			{}
[ \t]						{}
\n							{}

%%

int yywrap(void) 
{
	return 1;
}