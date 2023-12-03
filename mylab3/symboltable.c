#include "symboltable.h"
#include <stdio.h>
#include <string.h>

pidNode newIdNode(){
    pidNode node = malloc(sizeof(idNode));
    if(node == NULL){
        printf("Error: Run out of memory.\n");
        exit(0);
    }
    memset(node, 0, sizeof(idNode));
    return node;
}

//头插法
pidNode newIdList(pidNode head, int CurLevel){
    pidNode new = newIdNode();
    new->count = CurLevel;
    if(head != NULL){
        new->list = head;
        head = new;
    }
    else{
        head = new;
    }
    return head;
}

pidNode newIdNext(pidNode head, char* id, int count){
    pidNode new = newIdNode();
    new->id = id;
    new->count = count;
    if(head->next != NULL){
        new->next = head->next;
        head->next = new;        
    }
    else{
        head->next = new;
    }
    return head;
}

void popList(pidNode head){
    if(head != NULL){
        pidNode pre = head;
        pidNode cur = pre->next;
        head = head->list;
        free(pre);
        while(cur != NULL){
            pre = cur;
            cur = cur->next;
            free(pre);
        }
    }
}