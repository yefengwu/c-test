#include <stdio.h>

int main(int argc, char **argv)
{
    int m = 10;
    const int *p;
    int * const q = &m;
    const int * const r = &m;
    p = &m;//right

    /*(*p)++;*/

    /*q = &m;*/
    *q = 20;



    return 0;
}
