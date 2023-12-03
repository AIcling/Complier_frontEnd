#ifndef GENLLVM_H
#define GENLLVM_H
#include <stdio.h>
#include "ast.h"

int getVarNum();

void genRoot(past root,char *result);
void genGlobalVarDecl(past root,char *result);
void genGlobalConstDecl(past root,char *result);
void genFuncDef(past root,char *result);
void genBlock(past root,char *result);
int genExpr(past root,char *result);
int genFuncCall(past root,char *result);
void genWhileStmt(past node, char *result);
void genIfStmt(past Node,char *result);



#endif