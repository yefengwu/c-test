#include <stdio.h>

int add(int a, int b)
{
    return a+b;
}

int sub(int a, int b)
{
    return a - b;
}

int main()
{
    int m = 10, n = 20;

    int (*p[2])(int, int);
    p[0] = add;

    /*printf("%d\n", add(m, n));*/
    printf("%d\n", (*p[0])(m, n));

    p[1] = sub;
    printf("%d\n", (*p[1])(m, n));

    return 0;
}
