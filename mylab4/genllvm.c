#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ast.h"
#include "genllvm.h"

char buffer[500];
FILE *out;
char *result;
int scope = 0;
int nextLoop = 0;
int finalLoop = 0;

int getVarNum()
{
    static int num = 0;
    return ++num;
}

/*void printLine()
{
    for (int i = 0; i < scope; i++)
        sprintf(result, "  ");
    sprintf(result, "%s\n", buffer);
}
*/

int genArithmeticExpr(past Node, char *result){
    past left,right;
    int ret = 0;
    int lnum, rnum;
    switch(Node->nodeType)
   {
    case NT_OP_ADD:
        left = Node->child;
        right = left->sibling;
        lnum = genExpr(left,result);
        rnum = genExpr(right,result);
        sprintf(buffer, "%%%d = add nsw i32 %%%d, %%%d\n", ret = getVarNum(), lnum, rnum);
        strcat(result,buffer);
        break;
    case NT_OP_SUB:
        left = Node->child;
        right = left->sibling;
        lnum = genExpr(left,result);
        rnum = genExpr(right,result);
        sprintf(buffer, "%%%d = sub nsw i32 %%%d, %%%d\n", ret = getVarNum(), lnum, rnum);
        strcat(result,buffer);
        break;
    case NT_OP_MUL:
        left = Node->child;
        right = left->sibling;
        lnum = genExpr(left,result);
        rnum = genExpr(right,result);
        sprintf(buffer, "%%%d = mul nsw i32 %%%d, %%%d\n", ret = getVarNum(), lnum, rnum);
        strcat(result,buffer);
        break;
    case NT_OP_DIV:
        left = Node->child;
        right = left->sibling;
        lnum = genExpr(left,result);
        rnum = genExpr(right,result);
        sprintf(buffer, "%%%d = div nsw i32 %%%d, %%%d\n", ret = getVarNum(), lnum, rnum);
        strcat(result,buffer);
        break;
    case NT_OP_MOD:
        left = Node->child;
        right = left->sibling;
        lnum = genExpr(left,result);
        rnum = genExpr(right,result);
        sprintf(buffer, "%%%d = mod nsw i32 %%%d, %%%d\n", ret = getVarNum(), lnum, rnum);
        strcat(result,buffer);
        break;
    default:
    break;
    }
    return ret;
}

int genLogicExpr(past Node, char *result){
    int ret = 0;
    int lnum, rnum;
    Ast *left, *right; 
    switch (Node->nodeType)
    {
    case NT_OP_L:
        left = Node->child;
        right = left->sibling;
        lnum = genExpr(left,result);
        rnum = genExpr(right,result);
        sprintf(buffer, "%%%d = icmp slt i32 %%%d, %%%d\n", ret = getVarNum(), lnum, rnum);
        strcat(result,buffer);
        break;
    case NT_OP_LE:
        left = Node->child;
        right = left->sibling;
        lnum = genExpr(left,result);
        rnum = genExpr(right,result);
        sprintf(buffer, "%%%d = icmp sle i32 %%%d, %%%d\n", ret = getVarNum(), lnum, rnum);
        strcat(result,buffer);
        break;
    case NT_OP_G:
        left = Node->child;
        right = left->sibling;
        lnum = genExpr(left,result);
        rnum = genExpr(right,result);
        sprintf(buffer, "%%%d = icmp sgt i32 %%%d, %%%d\n", ret = getVarNum(), lnum, rnum);
        strcat(result,buffer);
        break;
    case NT_OP_GE:
        left = Node->child;
        right = left->sibling;
        lnum = genExpr(left,result);
        rnum = genExpr(right,result);
        sprintf(buffer, "%%%d = icmp sge i32 %%%d, %%%d\n", ret = getVarNum(), lnum, rnum);
        strcat(result,buffer);
        break;
    case NT_OP_E:
        left = Node->child;
        right = left->sibling;
        lnum = genExpr(left,result);
        rnum = genExpr(right,result);
        sprintf(buffer, "%%%d = icmp seq i32 %%%d, %%%d\n", ret = getVarNum(), lnum, rnum);
        strcat(result,buffer);
        break;
    case NT_OP_NE:
        left = Node->child;
        right = left->sibling;
        lnum = genExpr(left,result);
        rnum = genExpr(right,result);
        sprintf(buffer, "%%%d = icmp sne i32 %%%d, %%%d\n", ret = getVarNum(), lnum, rnum);
        strcat(result,buffer);
        break;
    case NT_OP_AND:
        left = Node->child;
        right = left->sibling;
        lnum = genExpr(left,result);
        rnum = genExpr(right,result);
        sprintf(buffer, "%%%d = icmp and i32 %%%d, %%%d\n", ret = getVarNum(), lnum, rnum);
        strcat(result,buffer);
        break;
    case NT_OP_OR:
        left = Node->child;
        right = left->sibling;
        lnum = genExpr(left,result);
        rnum = genExpr(right,result);
        sprintf(buffer, "%%%d = icmp sor i32 %%%d, %%%d\n", ret = getVarNum(), lnum, rnum);
        strcat(result,buffer);
        break;
    case NT_OP_NOT:
        left = Node->child;
        lnum = genExpr(left,result);
        sprintf(buffer, "%%%d = icmp not i32 %%%d\n", ret = getVarNum(), lnum);
        strcat(result,buffer);
        break;
     default:
     break;   
    }  
    return ret;
}
void genWhileStmt(past node, char *result)
{
    past cond = node->child;
    past body = cond->sibling;
    int loopNum = getVarNum();
    int bodyNum = getVarNum();
    int finalNum = getVarNum();
    nextLoop = loopNum;
    finalLoop = finalNum;
    strcat(result,"\n");
    sprintf(buffer,";<label>: %d\n",loopNum);
    strcat(result, buffer);
    int condNum = genExpr(cond,result);
    sprintf(buffer, "br i1 %%%d, label %%%d, label %%%d\n", condNum, bodyNum, finalNum);
    strcat(result,buffer);
    strcat(result,"\n");
    sprintf(buffer, ";<label>: %d\n",bodyNum);
    strcat(result,buffer);
    genBlock(body,result);
    sprintf(buffer, "br label %%%d\n", loopNum);
    strcat(result,buffer);
    strcat(result,"\n");
    sprintf(buffer,";<label>: %d\n",finalNum);
    strcat(result,buffer);
  }
void genIfStmt(past Node,char *result)
{
    Ast *cond = Node->child;
    Ast *ifStmt = cond->sibling;
    Ast *elseStmt = ifStmt->sibling;
    int condNum = genExpr(cond,result);
    int ifNum = getVarNum();
    int elseNum = getVarNum();
    sprintf(buffer, "br i1 %%%d, label %%%d, label %%%d\n", condNum, ifNum, elseNum);
    strcat(result,buffer);
    strcat(result, "\n");
    sprintf(buffer, ";<label>: %d\n", ifNum);
    strcat(result,buffer);
    genBlock(ifStmt,result);
    if (elseStmt == NULL)
    {
        sprintf(buffer, "br label %%%d\n", elseNum);
        strcat(result,buffer);
        strcat(result,"\n");
        sprintf(buffer, ";<label>: %d\n", elseNum);
        strcat(result,buffer);
    }
    else
    {
        int finalNum = getVarNum();
        sprintf(buffer, "br label %%%d\n", finalNum);
        strcat(result,buffer);
        strcat(result,"\n");
        sprintf(buffer, ";<label>: %d\n", elseNum);
        strcat(result,buffer);
        genBlock(elseStmt,result);
        sprintf(buffer, "br label %%%d\n", finalNum);
        strcat(result,buffer);
        strcat(result,"\n");
        sprintf(buffer, ";<label>: %d\n", finalNum);
        strcat(result,buffer);
    }
}

int genExpr(past root,char *result)
{
    int ret = 0;
    int lnum, rnum;
    Ast *left, *right;
    switch (root->nodeType)
    {
    case NT_VAR:
        sprintf(buffer, "%%%d = load i32 * %%%s, align 4\n", ret = getVarNum(), root->message);
        strcat(result,buffer);
        break;
    case NT_CONSTANT:
        sprintf(buffer, "%%%d = i32 %d, align 4\n", ret = getVarNum(), root->value);
        strcat(result,buffer);
        break;
    case NT_FUNCCALL:
        ret = genFuncCall(root,result);
        break;
    case NT_OP_ADD:
    case NT_OP_SUB:
    case NT_OP_MUL:
    case NT_OP_DIV:
    case NT_OP_MOD:
        ret = genArithmeticExpr(root,result);
        break;
    case NT_OP_L:
    case NT_OP_LE:
    case NT_OP_G:
    case NT_OP_GE:
    case NT_OP_E:
    case NT_OP_NE:
    case NT_OP_AND:
    case NT_OP_OR:
    case NT_OP_NOT:
        ret = genLogicExpr(root,result);
        break;
    default:
        break;
    }
    return ret;
}
void genAssignStmt(past Node,char *result){
    past stmt = Node->child;
    past expr,lval;
    int rnum;
    if(stmt->nodeType!=NT_OP_ASSIGN) return;
    lval = stmt->child;
    expr = lval->sibling;
    rnum = genExpr(expr,result);
    sprintf(buffer, "store i32 %%%d, i32 * %%%s, align 4\n", rnum, lval->message);
    strcat(result,buffer);
}



void genRoot(past root,char *result)
{
    for (Ast *child = root->child; child != NULL; child = child->sibling)
    {
        if (child->nodeType == NT_STMT_VARDECL)
        {
            genGlobalVarDecl(child,result);
        }
        else if (child->nodeType == NT_STMT_CONSTDECL)
        {
            genGlobalConstDecl(child,result);
        }
        else if (child->nodeType == NT_STMT_FUNCDEF)
        {
            genFuncDef(child,result);
        }
    }
}


void genGlobalVarDecl(past root,char *result)
{
    Ast *var = root->child->child;
    while (var != NULL)
    {
        if (var->nodeType == NT_VAR)
        {
            sprintf(buffer, "@%s = global i32, align 4\n", var->message);
            strcat(result,buffer);
        }
        else if (var->nodeType == NT_OP_ASSIGN)
        {
            Ast *id = var->child;
            Ast *value = id->sibling;
            if (id->nodeType == NT_VAR)
            {
                sprintf(buffer, "@%s = global i32 %d, align 4\n", id->message, value->value);
                strcat(result,buffer);
            }
        }
        var = var->sibling;
    }
}

void genGlobalConstDecl(past root,char *result)
{
    Ast *var = root->child->child;
    while (var != NULL)
    {
        Ast *id = var->child;
        Ast *value = id->sibling;
        if (id->nodeType == NT_VAR)
        {
            sprintf(buffer, "@%s = global i32 %d, align 4\n", id->message, value->value);
            strcat(result,buffer);
        }
        var = var->sibling;
    }
}

void genFuncDef(past root,char *result)
{
    strcat(result,"\n");
    Ast *funcType = root->child;
    Ast *funcName = funcType->sibling;
    Ast *block, *params;
    if (funcName->sibling->nodeType == NT_PARAM)
    {
        params = funcName->sibling;
        block = params->sibling;
        char tmp[50] = {0};
        int length = 0;
        for (Ast *param = params->child; param != NULL; param = param->sibling)
        {
            sprintf(tmp + length, "i32 %%%s,", param->child->sibling->message);
            length = strlen(tmp);
        }
        tmp[length - 1] = 0;
        sprintf(buffer, "define %s @%s(%s) #0 {",
                funcType->message[0] == 'i' ? "i32" : "void", funcName->message, tmp);
        strcat(result,buffer);
        strcat(result,"\n");
        scope++;

        genBlock(block,result);

        scope--;
        sprintf(buffer, "}\n");
        strcat(result,buffer);
    }
    else
    {
        block = funcName->sibling;
        sprintf(buffer, "define %s @%s() #0 {",
                funcType->message[0] == 'i' ? "i32" : "void", funcName->message);
            for (int i = 0; i < scope; i++)
        strcat(result, "  ");
        strcat(result,buffer);
        strcat(result,"\n");

        scope++;

        genBlock(block,result);

        scope--;
        sprintf(buffer, "}\n");
        for (int i = 0; i < scope; i++)
    strcat(result, "  ");
    strcat(result,buffer);
    }
}

void genBlock(past root,char *result)
{
    Ast *stmt = root->child;
    Ast *var;
    Ast *lval, *expr;
    int rnum;
    char *mes;
    while (stmt != NULL)
    {
        switch (stmt->nodeType)
        {
        case NT_STMT_VARDECL:
        case NT_STMT_CONSTDECL:
            var = stmt->child->child;
            while (var != NULL)
            {
                if (var->nodeType == NT_VAR)
                {   
                   
                    sprintf(buffer, "%%%s = alloca i32, align 4\n", var->message);
                    strcat(result,buffer);
                 }
                else if (var->nodeType == NT_OP_ASSIGN)
                {
                    Ast *id = var->child;
                    Ast *value = id->sibling;
                    if (id->nodeType == NT_VAR)
                    {
                        sprintf(buffer, "%%%s = alloca i32, align 4\n", id->message);
                        strcat(result,buffer);
                        sprintf(buffer, "store i32 %d, i32 * %%%s, align 4\n", value->value, id->message);
                        strcat(result,buffer);
                    }
                }
                var = var->sibling;
            }
            break;
        case NT_OP_ASSIGN:
            lval = stmt->child;
            expr = lval->sibling;
            rnum = genExpr(expr,result);
            printf("%s\n",lval->message);
            sprintf(buffer, "store i32 %%%d, i32 * %%%s, align 4\n", rnum, lval->message);
            strcat(result,buffer);
            break;
        case NT_FUNCCALL:
            genFuncCall(stmt,result);
            break;
        case NT_STMT_IFELSE:
            genIfStmt(stmt,result);
            break;
        case NT_STMT_WHILE:
            genWhileStmt(stmt,result);
            break;
        case NT_STMT_BREAK:
            sprintf(buffer, "br label %%%d\n", finalLoop);
            strcat(result,buffer);
            break;
        case NT_STMT_CONTINUE:
            sprintf(buffer, "br label %%%d\n", nextLoop);
            strcat(result,buffer);
            break;
        case NT_STMT_RETURN:
            expr = stmt->child;
            if (expr == NULL)
            {
                strcat(result, "ret\n");
            }
            else
            {
                rnum = genExpr(expr,result);
                sprintf(buffer, "ret i32 %%%d\n", rnum);
                strcat(result,buffer);
            }
        default:
            break;
        }
        stmt = stmt->sibling;
    }
}



int genFuncCall(past root,char *result)
{
    Ast *funcName = root->child;
    Ast *params = funcName->sibling;
    char tmp[50] = {0};
    int length = 0;
    if (params != NULL)
    {
        for (Ast *param = params->child; param != NULL; param = param->sibling)
        {
            int num = genExpr(param,result);
            sprintf(tmp + length, "i32 %%%d,", num);
            length = strlen(tmp);
        }
        tmp[length - 1] = 0;
    }
    int ret = getVarNum();
    sprintf(buffer, "%%%d = call i32 @%s(%s)\n", ret, funcName->message, tmp);
    strcat(result,buffer);
    return ret;
}

