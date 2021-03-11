#include <stdio.h>

int main(int argc, char **argv)
{
    int m = 10;
    int n = 20;
    const int *p;

    p = &m;
    (*p)++;
    p = &n;
    return 0;
}
