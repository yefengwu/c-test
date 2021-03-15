#include "btree.h"

int main(void)
{
    btree_pnode p;

    p = btree_create();
    printf("preorder btree:");
    pre_order(p);
    printf("\n");

    //先序非递归算法
    printf("preorder btree:");
    unpre_order(p);
    printf("\n");

    printf("midorder btree:");
    mid_order(p);
    printf("\n");

    printf("postorder btree:");
    post_order(p);
    printf("\n");

    printf("leveltorder btree:");
    level_order(p);
    printf("\n");


    return 0;
}
