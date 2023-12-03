#ifndef __SYMBOL
#define __SYMBOL

typedef struct _idNode idNode;
typedef struct _idNode *pidNode;
struct _idNode{
    char* id;
    int count;
    pidNode list;
    pidNode next;
};

pidNode newIdNode();
pidNode newIdList(pidNode head, int CurLevel);
pidNode newIdNext(pidNode head, char* id, int count);
void popList(pidNode head);
#endif