#include <stdio.h>

int seqfind(int *a, int key);

#define N 6
int main(void)
{
    int a[N] = {2, 3, 4, 7, 6, 9};
    int i, key;
    char ch;

    for(i = 0;i < N-1; i++)
    {
        printf("%d ", a[i]);
    }
    puts("");

    while(1)
    {
        printf("pls input key:");
        scanf("%d", &key);
        i = seqfind(a, key);
        if(i == -1)
        {
            printf("find error\n");
        }else
        {
            printf("find %d at %d\n", key, i);
        }
        printf("continue?(Y/y)");
        while(getchar() != '\n');//清空缓冲
        scanf("%c", &ch);
        if(ch == 'y' || ch == 'Y')
            continue;
        else
            break;
    }

    return 0;
}


int seqfind(int *a, int key)
{
    int i;
    for(i = N-1; i >= 0; i--)
    {
        if(key == a[i])
            return i;//ok
    }
    return i;//err
}
