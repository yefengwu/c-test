#include <stdio.h>
#include <stdlib.h>
#include "linklist.h"

int main(int argc, const char *argv[])
{
    linklist H; 

    H = list_create2();
    list_show(H);

    list_sort(H);
    list_show(H);


#if 0
    list_head_insert(H, 60);
    list_head_insert(H, 50);
    list_head_insert(H, 40);
    list_head_insert(H, 30);
    list_head_insert(H, 20);
    list_head_insert(H, 10);
    list_show(H);

    list_order_insert(H, 5);
    list_show(H);
    list_order_insert(H, 35);
    list_show(H);
    list_order_insert(H, 55);
    list_show(H);
    list_order_insert(H, 75);
    list_show(H);
#endif

    return 0;
}
