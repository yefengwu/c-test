#ifndef _LINKLIST_H_
#define _LINKLIST_H_

typedef int datatype;

typedef struct node {
    datatype data;
    struct node * next;
}listnode, *linklist;

extern linklist list_create();
extern linklist list_create2();
extern void list_show(linklist H);
extern linklist list_get(linklist H, int pos);
extern linklist list_locate(linklist H, datatype value);
extern int list_head_insert(linklist H, datatype value);
extern int list_insert(linklist H, int pos, datatype value);
extern int list_order_insert(linklist H, datatype value);
extern int list_delete(linklist H, int pos);
extern void list_reverse(linklist H);
extern void list_sort(linklist H);

#endif
