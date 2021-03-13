#ifndef _SEQQUEUE_H_
#define _SEQQUEUE_H_

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef int datatype;
#define MAXSIZE 10
typedef struct {
    datatype data[MAXSIZE];
    int front, rear;
}seq_queue, *seq_pqueue;

extern seq_pqueue init_seqqueue(void);
extern bool push_seqqueue(datatype data, seq_pqueue q);
extern bool pop_seqqueue(seq_pqueue q, datatype *p);
extern void show_seqqueue(seq_pqueue q);
extern bool is_empty_seqqueue(seq_pqueue q);
extern bool is_full_seqqueue(seq_pqueue q);

#endif
