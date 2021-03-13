#include "linkqueue.h"

int main(int argc, char *argv[])
{
    link_pqueue q;
    int ret;
    datatype data, t;


    q = init_linkqueue();

    while(1)
    {
        printf("please input a interger:");
        ret = scanf("%d", &data);
        //input a interger, push_linkqueue
        if(ret == 1)
        {
            if(push_linkqueue(data, q))
                show_linkqueue(q);
        }
        //input a chra pop_linkqueue
        else
            if(pop_linkqueue(q, &t))
            {
                printf("pop : %d\n", t);
                show_linkqueue(q);
            }
            //clear cache_buffer
            while(getchar() != '\n');
    }
    
    return 0;
}
