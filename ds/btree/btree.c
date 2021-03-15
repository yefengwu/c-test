#include "btree.h"
#include "linkqueue.h"
#include "linkstack.h"


btree_pnode btree_create(void)
{
    datatype_bt ch;
    btree_pnode new;
    
    scanf("%c", &ch);
    if(ch == '#')
        return NULL;
    else
    {
        if((new = (btree_pnode)malloc(sizeof(btree_node))) == NULL)
        {
            printf("malloc failed\n");
            return NULL;
        }
        new->data = ch;
        //create lchild_tree, rchild_tree
        new->lchild = btree_create();
        new->rchild = btree_create();
    }
    
    return new;
}

#if 0
void btree_create(btree_pnode T)
{
    datatype_bt ch;
    scanf("%c", &ch);
    if(ch == '#')
        T = NULL;
    else
    {
        if((T = (btree_pnode)malloc(sizeof(btree_node))) == NULL)
        {
            printf("malloc failed\n");
            exit(1);
        }
        T->data = ch;
        //create lchild_tree, rchild_tree
        btree_create(T->lchild);
        btree_create(T->rchild);
    }
    
}
#endif

void pre_order(btree_pnode t)
{
    if(t != NULL)
    {
        //order root
        printf("%c", t->data);
        //lchild
        pre_order(t->lchild);
        //rchild
        pre_order(t->rchild);
    }
}

//先序非递归算法
void unpre_order(btree_pnode t)
{
    linklist top;
    linkstack_create(top);

    while(t != NULL || !linkstack_empty(top))
    {
        if(t != NULL)
        {
            printf("%c", t->data);
            if(t->rchild != NULL)
                linkstack_push(top, t->rchild);
            t = t->lchild;
        }else
            t = linkstack_pop(top);
    }



}

void mid_order(btree_pnode t)
{
    if(t != NULL)
    {
        //lchild
        mid_order(t->lchild);
        //order root
        printf("%c", t->data);
        //rchild
        mid_order(t->rchild);
    }
}

void post_order(btree_pnode t)
{
    if(t != NULL)
    {
        //lchild
        post_order(t->lchild);
        //rchild
        post_order(t->rchild);
        //order root
        printf("%c", t->data);
    }
}

//Level traversal
void level_order(btree_pnode t)
{
    link_pqueue q;
    q = init_linkqueue();

    while(t != NULL)
    {
        printf("%c", t->data);
        if(t->lchild != NULL)
            push_linkqueue(t->lchild, q);
        if(t->rchild != NULL)
            push_linkqueue(t->rchild, q);
        if(is_empty_linkqueue(q))
        {
            pop_linkqueue(q, &t);
        }else
            break;
    }

}
