#include <stdio.h>

int main(int argc, char **argv)
{
    int a[2][3] = {{2, 3, 4}, {3, 4, 5}};
    int *p[2] = {a[0], a[1]};
    int i, j, sum = 0;
    int **q;

    q = p;//&p[0]
    printf("total:%ld\n", sizeof(p));
    /*printf("%d %d %d\n", a[0][1], *(a[0]+1), *(p[0]+1));*/
    /*printf("%d\n", *(p[1] + 2));*/

    for(i = 0; i < 2; i++)
    {
        for(j = 0; j < 3; j++)
        {
            sum += *(p[i]+j);
            printf("%d %d ", a[i][j], *(p[i]+j));
            printf("%d %d ", *(*(a+i)+j), *(*(p+i)+j));

        }
        puts("");

    }
 
    printf("sum = %d\n", sum);

    return 0;
}

