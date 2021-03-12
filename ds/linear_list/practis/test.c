#include "linklist.h"


int main(int argc, char *argv[])
{
    linklist H;
    /*int k = 3, m = 4;*/
    /*int k = 3, m = 1;*/
    int k = 1, m = 1;

    H = list_create();

    list_show(H);

    list_jose(H, k, m);

    return 0;
}
