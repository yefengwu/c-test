#include "linkqueue.h"

link_pqueue init_linkqueue(void)
{
    //malloc front/rear
    link_pqueue q;
    if((q = (link_pqueue)malloc(sizeof(link_queue))) == NULL)
    {
        printf("malloc failed\n");
        return NULL;
    }
    //malloc head_node 
    if(((q->front) = (linkqueue_pnode)malloc(sizeof(linkqueue_node))) == NULL)
    {
        printf("malloc failed\n");
        return NULL;
    }
    q->front->next = NULL;
    q->rear = q->front;

    return q;
}

bool push_linkqueue(datatype data, link_pqueue q)
{
    linkqueue_pnode new;

    //malloc data_node 
    if((new = (linkqueue_pnode)malloc(sizeof(linkqueue_node))) == NULL)
    {
        printf("malloc failed\n");
        return NULL;
    }
    new->data = data;
    new->next = q->rear->next;
    q->rear->next = new;

    q->rear = q->rear->next;
    return true;
}

bool pop_linkqueue(link_pqueue q, datatype *p)
{
    linkqueue_pnode t;
    if(is_empty_linkqueue(q))
    {
        printf("queue is empty\n");
        return false;
    }
    //queue is not empty, pop
    t = q->front;
    q->front = q->front->next;
    *p = q->front->data;
    free(t);
    return true;
}

void show_linkqueue(link_pqueue q)
{
    linkqueue_pnode p;
    for(p = q->front->next; p != NULL; p = p->next)
        printf("%d\t", p->data);
    printf("\n");
}

bool is_empty_linkqueue(link_pqueue q)
{
    if(q->rear == q->front)
        return true;
    else
        return false;
}

/*bool is_full_linkqueue(link_pqueue q)*/
/*{*/

/*}*/
