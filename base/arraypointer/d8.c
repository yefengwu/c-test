#include <stdio.h>

int main(int argc, char **argv)
{
    int a[3][2] = {{1, 3}, {2, 3}, {3, 5}};
    int (*p)[2], i, j;


    p = a;
    /*p = &a[0][0];*/
    printf("%d\n", a[1][1]);

    printf("%p %p\n", a, a+1);
    printf("%p %p\n", p, p+1);

    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 2; j++)
        {
            printf("%d, %d, %d, %d\n", a[i][j], p[i][j], *(*(a + i)+j),*(*(p+i)+j));
            puts("");
        }
    }
    return 0;
}

