#include <stdio.h>

int main(int argc, char **argv)
{
    int *p[3];//int 
    int a[] = {2, 3, 4, 5, 6};

    p[0] = a;
    p[1] = a + 1;
    p[2] = a + 3;

    printf("%d %d %d",*p[0], *p[1], *p[2]);

    puts("");

    return 0;
}

