#include <stdio.h>

int main(int argc, char **argv)
{
    int m = 10;
    double n = 3.14;
    void *p, *q;

    p = (void *)&m;
    printf("%d %d\n", m, *(int *)p);
    p++;
    printf("%p\n", p);

    /*q = (void *)&n;*/
    q = &n;
    printf("%.2lf %.2lf\n", n, *(double *)q);
    q++;
    printf("%p\n", q);

    return 0;
}
