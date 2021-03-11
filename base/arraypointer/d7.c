#include <stdio.h>

int main(int argc, char **argv)
{
    int a[3][2] = {{1, 3}, {2, 3}, {3, 5}};
    int *p, i, n;

    n = sizeof(a) / sizeof(int);

   //p = a;
   /*p = &a[0][0];*/
   p = a[0];
   printf("%p %p\n", a, a+1);
   printf("%p %p\n", a[0], a[0]+1);
   printf("%p %p\n", *a, *a+1);


    puts("");
    return 0;
}

