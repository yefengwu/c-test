#include <stdio.h>

int main(int argc, char **argv)
{
    int a[2][3] = {{2, 3, 4}, {3, 4, 5}};

    int *p[2];//int 

    p[0] = a[0];//&a[0][0]
    p[1] = a[1];//&a[1][0]

    printf("%d %d %d\n", a[0][1], *(a[0]+1), *(p[0]+1));

    printf("%d\n", *(p[1] + 2));
 

    return 0;
}

