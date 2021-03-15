#include <stdio.h>

#define N 10
void show(int *a);
void shellsort(int *a);

int main(void)
{
    int a[N] = {50, 36, 66, 76, 95, 12, 25, 36, 24, 8};
    printf("原无序记录如下:");
    show(a);
    printf("排序过程如下:\n");
    shellsort(a);
    return 0;
}


void show(int *a)
{
    int i;
    for(i = 0; i < N; i++)
        printf("%d ", a[i]);
    printf("\n");
}

void shellsort(int *a)
{
    int i,j,temp;
    int d;
    for(d = N/2; d > 0; d /= 2)
    {
        for(i = d; i < N; i++)
        {
            temp = a[i];
            for(j = i-d; j >= 0; j -= d)
            {
                if(temp < a[j])
                    a[j+d] = a[j];
                else
                    break;
            }
            a[j+d] = temp;
        }
        show(a);
    }
}
