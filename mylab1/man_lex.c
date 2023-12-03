#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

#define MAX_LEN 100
#define LETTER 0
#define DIGIT 1
#define UNKNOWN 999
#define UNDERLINE 2
#define POINT 3

int charClass;
char lexeme[MAX_LEN];
char nextChar;
char next2Char;
int lexLen;
int token;
int nextToken;
FILE *f;

enum {
	num_INT = 256,
	num_FLOAT = 257,

	Y_ID = 258,
	
	Y_FOR = 259,
	Y_FLOAT = 260,
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

	Y_EOF = 293
};
char *keywords[]={"for","float","int","void","const","if","else","while","break","continue","return",0};

void addChar(){
	if(lexLen <= MAX_LEN-2){
		lexeme[lexLen++]=nextChar;
		lexeme[lexLen]=0;
	}
	else{
		printf("lexeme is too long.\n");
	}
}

void getChar(){
	static int firstRun = 1;
	if(firstRun){
		nextChar=getc(f);
		next2Char=getc(f);
		firstRun=0;
	}
	else{
		nextChar=next2Char;
		next2Char=getc(f);
	}
	
	if(nextChar == EOF){
		charClass=EOF;
	}
	else{
		if(isalpha(nextChar))
			charClass=LETTER;
		else if(isdigit(nextChar))
			charClass=DIGIT;
		else if(nextChar=='_')
			charClass=UNDERLINE;
		else if(nextChar=='.')
			charClass=POINT;
		else
			charClass=UNKNOWN;
	}
}

void getNonBlank(){
	while(isspace(nextChar))
		getChar();
}

int checkSymbol(char ch,char nextCh){
	switch(ch){
		case'+':
			addChar();
			nextToken=Y_ADD;
			break;
		case'-':
			addChar();
			nextToken=Y_SUB;
			break;
		case'*':
			addChar();
			nextToken=Y_MUL;
			break;
		case'/':
			addChar();
			nextToken=Y_DIV;
			if(nextCh=='/'){
				while(nextChar!='\n'){
					getChar();
					addChar();
				}
				return 0;
			}
			break;
		case'%':
			addChar();
			nextToken=Y_MODULO;
			break;
		case'(':
			addChar();
			nextToken=Y_LPAR;
			break;
		case')':
			addChar();
			nextToken=Y_RPAR;
			break;
		case'[':
			addChar();
			nextToken=Y_LSQUARE;
			break;
		case']':
			addChar();
			nextToken=Y_RSQUARE;
			break;
		case'{':
			addChar();
			nextToken=Y_LBRACKET;
			break;
		case'}':
			addChar();
			nextToken=Y_RBRACKET;
			break;
		case';':
			addChar();
			nextToken=Y_SEMICOLON;
			break;
		case',':
			addChar();
			nextToken=Y_COMMA;
			break;
		case'=':
			addChar();
			nextToken=Y_ASSIGN;
			if(nextCh=='='){
				getChar();
				addChar();
				nextToken=Y_EQ;
			}
			break;
		case'>':
			addChar();
			nextToken=Y_GREAT;
			if(nextCh=='='){
				getChar();
				addChar();
				nextToken=Y_GREATEQ;
			}
			break;
		case'<':
			addChar();
			nextToken=Y_LESS;
			if(nextCh=='='){
				getChar();
				addChar();
				nextToken=Y_LESSEQ;
			}
			break;
		case '!':
			addChar();
			nextToken=Y_NOT;
			if(nextCh=='='){
				getChar();
				addChar();
				nextToken=Y_NOTEQ;
			}
			break;
		case EOF:
			addChar();
			nextToken=Y_EOF;
			break;
		default:
			printf("unknown character'%c'.\n",ch);
			nextToken=-1;
	}
	return nextToken;
}

void checkKeywords(char* pword){
	int i = 0;
	while(keywords[i]!=0){
		char* pkeyword=keywords[i];
		if(strcmp(pword,pkeyword)==0){
			nextToken=259+i;
			return;
		}
		i++;
	}
}

int lexer(){
	lexLen=0;
	int flag=1;
	getNonBlank();
	switch(charClass){
		case UNDERLINE:
			addChar();
			getChar();
			while(charClass==LETTER||charClass==DIGIT||charClass==UNDERLINE){
				addChar();
				getChar();
			}
			nextToken=Y_ID;
			break;
		case LETTER:
			addChar();
			getChar();
			while(charClass==LETTER||charClass==DIGIT||charClass==UNDERLINE){
				addChar();
				getChar();
			}
			nextToken=Y_ID;
			checkKeywords(lexeme);
			break;
		case DIGIT:
			addChar();
			getChar();
			while(charClass==DIGIT){
				addChar();
				getChar();
			}
			nextToken=num_INT;
			if(charClass==POINT){
				addChar();
				getChar();
				while(charClass==DIGIT){
					addChar();
					getChar();
				}
				nextToken=num_FLOAT;
			}
			break;
		case UNKNOWN:
			flag=checkSymbol(nextChar,next2Char);
			getChar();
			break;
		case EOF:
			nextToken=Y_EOF;
			lexeme[0]='E';
			lexeme[1]='O';
			lexeme[2]='F';
			lexeme[3]=0;
			break;
	}
	if(flag!=0){
		printf("<%6d, %s\t>\n",nextToken,lexeme);
	}
	return nextToken;
}

void main(int argc,char* argv[]){
	if(argc<2){
		printf("input file is needed.\n");
		exit(0);
	}
	f=fopen(argv[1],"r");
	if(f==NULL){
		printf("can not open file.\n");
		exit(0);
	}
	getChar();
	while(nextToken!=Y_EOF)
		lexer();
}

