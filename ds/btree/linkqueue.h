#ifndef _LINKQUEUE_H_
#define _LINKQUEUE_H_
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "btree.h"

typedef btree_pnode datatype;

typedef struct linkqueuenode {
    datatype data;
    struct linkqueuenode *next;
}linkqueue_node, *linkqueue_pnode;

typedef struct  {
    linkqueue_pnode front, rear;
}link_queue, *link_pqueue;



extern link_pqueue init_linkqueue(void);
extern bool push_linkqueue(datatype data, link_pqueue q);
extern bool pop_linkqueue(link_pqueue q, datatype *p);
extern void show_linkqueue(link_pqueue q);
extern bool is_empty_linkqueue(link_pqueue q);
extern bool is_full_linkqueue(link_pqueue q);



#endif


