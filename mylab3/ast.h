#ifndef __AST_H
#define __AST_H


typedef struct _ast ast;
typedef struct _ast *past;

struct _ast{
    char* nodeType;
    char* id;
    int ivalue;
    past list;
    past left;
    past right;
};

typedef struct _ident ident;
typedef struct _ident *pid;
struct _ident
{
    char* id;
    int count;
    pid next;
};


extern past root;
extern pid IdentList;

past newAstNode();
past ListNode(past HeadNode, past node);
past newNode(char* nodeType, char* id, int ivalue, past list, past left, past right);
pid newIdentNode();
char* IdentTable(char* ID);
static void space_n(int n);
void showAst(past node, int nest);

#endif