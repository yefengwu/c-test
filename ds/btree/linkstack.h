#ifndef _LINKSTACK_H_
#define _LINKSTACK_H_
#include <stdio.h>
#include <stdlib.h>
#include "btree.h"


typedef btree_pnode datatype_ls;

typedef struct node {
    datatype_ls data;
    struct node * next;
}listnode, *linklist;

extern linklist linkstack_create();
extern int linkstack_empty(linklist s);
extern void linkstack_clear(linklist s);
extern int linkstack_push(linklist s, datatype_ls value);
extern datatype_ls linkstack_pop(linklist s);
extern datatype_ls linkstack_top(linklist s);
extern void linkstack_free(linklist s);



#endif
