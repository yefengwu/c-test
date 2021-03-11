#include <stdio.h>

int arry_sum(int * data, int n);

int main(int argc, char *argv[] )
{
    int a[] = {3, 4, 3, 2, 5};
    int sum = 0;

    sum = arry_sum(a, sizeof(a)/sizeof(int));

    printf("sum = %d\n", sum);
    return 0;

}

int arry_sum(int *data, int n)
{
    int ret = 0;
    int i;

    for (i = 0; i < n; i++)
    {
        ret += data[i];
    }

    return ret;
}
