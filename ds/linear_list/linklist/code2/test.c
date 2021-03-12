#include <stdio.h>
#include <stdlib.h>
#include "linklist.h"

int main(int argc, const char *argv[])
{
    /*linklist p;*/
    linklist H; 
    int n;

    /*H = list_create2();*/

#if 0
#endif
    H = list_create();
    list_head_insert(H, 10);
    list_head_insert(H, 20);
    list_head_insert(H, 30);
    list_head_insert(H, 40);
    list_show(H);
#if 0
    list_show(H);

    printf("please input position:");
    scanf("%d", &n);
    if((p = list_get(H, n)) != NULL)
    {
        printf("node data:%d\n", p->data);
    }

#endif

#if 0
    printf("please input position:");
    scanf("%d", &n);
    if((p = list_locate(H, n)) != NULL)
    {
        printf("found data:%d\n", p->data);
    }
    else
    {
        printf("not found:%d\n", n);
    }

    printf("please input position:");
    scanf("%d", &n);
    if((list_insert(H, n, 90)) == -1)
    {
        printf("insert failed\n");
    }
    list_show(H);
#endif

    printf("please input position:");
    scanf("%d", &n);
    if((list_delete(H, n) == -1))
    {
        printf("delete failed\n");
    }
    list_show(H);
    list_reverse(H);

    list_show(H);

    return 0;
}
