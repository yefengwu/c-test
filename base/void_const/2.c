#include <stdio.h>

int main(int argc, char **argv)
{
    int a[] = {2, 3, 4, 1, 6};
    int i, n;
    void *p;

    p = a;

    n = sizeof(a) / sizeof(int);
    for(i = 0; i < n; i++)
    {
        printf("%d", *((int *)p+i));
    }
    puts("");

    return 0;
}
