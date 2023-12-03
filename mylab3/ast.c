#include "ast.h"
#include "lrparser.tab.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


past root;
pid IdentList;
past newAstNode(){
    past node = malloc(sizeof(ast));
    if(node == NULL){
        printf("Error: Run out of memory.\n");
        exit(0);
    }
    memset(node, 0, sizeof(ast));
    node->ivalue = __INT_MAX__;
    return node;
}


past ListNode(past HeadNode, past node){
    if(HeadNode->list == NULL){
        HeadNode->list = node;
    }
    else{
        past cur = HeadNode->list;
        while(cur->list != NULL){
            cur = cur->list;
        }
        cur->list = node;
    }
    return HeadNode;
}

past newNode(char* nodeType, char* id, int ivalue, past list, past left, past right){
   past var = newAstNode();
   var->nodeType = strdup(nodeType);
   var->id = id;
   var->ivalue = ivalue;
   var->list = list;
   var->left = left; 
   var->right = right; 
   return var;
}
/*
pid newIdentNode(){
    pid node = malloc(sizeof(ident));
    if(node == NULL){
        printf("Error: Run out of memory.\n");
        exit(0);
    }
    memset(node, 0, sizeof(ident));
    return node;
}

char* IdentTable(char* ID){
    pid cur = IdentList;
    pid new = newIdentNode();
    while(strncmp(ID,cur->id,strlen(ID+1))&&(cur->next!=NULL)){
        cur = cur->next;
    }
    if(cur == NULL){
        new->id = strdup(ID);
        new->count = 0;
        new->next = IdentList;
        IdentList = new;
    }
    else{
        new->id = strdup(ID);
        new->count = cur->count + 1;
        new->next = IdentList;
        IdentList = new;
    }
    char* Ident = (char*)malloc(sizeof(char)*(strlen(ID) + 2));
    strncpy(Ident,ID,strlen(ID));
    char* str = NULL;
    sprintf(str,"%d",new->count);
    strcat(Ident,str);
    return Ident;
}
*/
static void space_n(int n){
    for(;n>0;n--){
        printf("    ");
    }
}

void showAst(past node, int nest){
    if(node == NULL) return;

    space_n(nest);
    printf("%s",node->nodeType);
    if(node->id != NULL){
        printf("    %s",node->id);
    }
    if(node->ivalue != __INT_MAX__){
        printf("    %d\n",node->ivalue);
    }
    else{
        printf("\n");
    }

    if(node != NULL){
        free(node);
    }

    showAst(node->left,nest+1);
    showAst(node->right,nest+1);
    showAst(node->list,nest);
}

