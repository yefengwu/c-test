#ifndef _LINKLIST_H_
#define _LINKLIST_H_

typedef int datatype;

typedef struct node {
    datatype data;
    struct node * next;
}listnode, *linklist;


#endif
