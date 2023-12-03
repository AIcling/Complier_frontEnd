#include <stdio.h>
#include "lrparser.tab.h"
#include "ast.h"
#include "genllvm.h"
#include "stdlib.h"

Ast *g_root;
extern FILE *yyin;
//extern FILE *fp_error;
extern FILE *out;
extern char *result;
int yyparse();

int main(int argc, char *argv[])
{
    result = (char *)malloc(100000);
    g_root = createNode(0, NT_ROOT, "root");
    yyin = fopen(argv[1], "r");
    //fp_error = fopen("error.txt", "w");
    //FILE *ast = fopen("ast.txt", "w");
    //out = fopen("output.txt", "w");

    yyparse();
    //printAst(g_root, ast);
    //fclose(ast);

    genRoot(g_root,result);
    printf(result);
    
    free(result);
    fclose(yyin);
    //fclose(fp_error);
    fclose(out);
    return 0;
}