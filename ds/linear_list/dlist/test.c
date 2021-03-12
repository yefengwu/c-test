#include "dlist.h"

int main(int argc, char *arv[])
{
    dlistnode * H;
    /*dlistnode *p;*/
    int pos;

    H = dlist_create();
    dlist_show(H);
    while (1)
    {
        printf("input pos:");
        scanf("%d", &pos);
        dlist_delete(H, pos);
        dlist_show(H);
    }

#if 0
    while (1)
    {
        printf("input pos:");
        scanf("%d", &pos);
        dlist_insert(H, 100, pos);
        dlist_show(H);
    }
#endif
    
#if 0
    while (1)
    {
        printf("input pos:");
        scanf("%d", &pos);
        p = dlist_get(H, pos);
        if(p)
        {
            printf("%d\n", p->data);
        }
        else
            break;

     }
#endif

    return 0;
}
