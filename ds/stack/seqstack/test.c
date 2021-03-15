#include "sqstack.h"

int main(int argc, char *argv[])
{
    sqstack * s;
    int n = 3;

    s = stack_create(n);
    stack_push(s, 10);
    stack_push(s, 20);
    stack_push(s, 30);
    stack_push(s, 40);
    stack_push(s, 50);
    stack_push(s, 60);

    /*stack_clear(s);*/
    while(!stack_empty(s))
    {
        printf("%d ", stack_pop(s));
    }
    puts("");


    stack_free(s);

    return 0;

}
