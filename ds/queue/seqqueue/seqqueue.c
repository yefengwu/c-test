#include "seqqueue.h"
#include <stdio.h>

seq_pqueue init_seqqueue(void)
{
    seq_pqueue s;
    if((s = (seq_pqueue)malloc(sizeof(seq_queue))) == NULL)
    {
        printf("malloc failed\n");
        return NULL;
    }

    s->front = s->rear = MAXSIZE - 1;

    return s;
}

bool is_full_seqqueue(seq_pqueue q)
{
    if((q->rear + 1)%MAXSIZE == q->front)
        return true;
    else
        return false;
}

bool push_seqqueue(datatype data, seq_pqueue q)
{
    if(is_full_seqqueue(q))
    {
        printf("seqqueue is full\n");
        return false;
    }

    q->rear = (q->rear + 1)%MAXSIZE;
    q->data[q->rear] = data;
    return true;
}

bool is_empty_seqqueue(seq_pqueue q)
{
    if(q->rear == q->front)
        return true;
    else
        return false;
}

bool pop_seqqueue(seq_pqueue q, datatype *p)
{
    if(is_empty_seqqueue(q))
    {
        printf("seqqueue is empty\n");
        return false;
    }

    q->front = (q->front + 1)%MAXSIZE;
    *p = q->data[q->front];
    return true;
}

void show_seqqueue(seq_pqueue q)
{
    int i;
     if(is_empty_seqqueue(q))
        return;

     for(i = (q->front + 1)%MAXSIZE; i != (q->rear + 1)%MAXSIZE; i = (i + 1)%MAXSIZE)
     {
         printf("%d ", q->data[i]);
     }
     puts("");
}
