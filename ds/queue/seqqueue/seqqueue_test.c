#include "seqqueue.h"


int main(int argc, char *argv[])
{
    seq_pqueue q;
    int ret;
    datatype data, t;


    q = init_seqqueue();

    while(1)
    {
        printf("please input a interger:");
        ret = scanf("%d", &data);
        //input a interger, push_seqqueue
        if(ret == 1)
        {
            if(push_seqqueue(data, q))
                show_seqqueue(q);
        }
        //input a chra pop_seqqueue
        else
            if(pop_seqqueue(q, &t))
            {
                printf("pop : %d\n", t);
                show_seqqueue(q);
            }
            //clear cache_buffer
            while(getchar() != '\n');
    }
    
    return 0;
}
