#include <stdio.h>

int binsearch(int *a, int key);

#define N 12
int main(void)
{
    int a[N] = {3, 12, 18, 20, 32, 55, 60, 68, 80, 86, 90, 100};
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
        i = binsearch(a, key);
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


int binsearch(int *a, int key)
{
    int low = 0, mid, high = N-1;
    while(low <= high)
    {
        mid = (low + high) / 2; //找到中间位置
        if(key == a[mid])
        {
            return mid;
        }
        else if(key < a[mid])
            high = mid - 1;
        else
            low = mid + 1;
    }
    return -1;

}
