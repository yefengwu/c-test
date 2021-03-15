#include "linkstack.h"

int main(int argc, char *argv[])
{
    linklist s;
    s = linkstack_create();
    linkstack_push(s, 10);
    linkstack_push(s, 20);
    linkstack_push(s, 30);
    linkstack_push(s, 40);
    linkstack_push(s, 50);
    linkstack_push(s, 60);
    linkstack_push(s, 70);

    /*linkstack_clear(s);*/
    linkstack_free(s);
#if 0
    while(!linkstack_empty(s))
    {
        printf("%d ", linkstack_pop(s));
    }
#endif
    puts("");



    return 0;
}
