#include <stdio.h>

int main(int argc, char **argv)
{
  int a[5] = {3, 4, 6, 5};
  int *p, *q;

  p = &a[0];
  q = &a[3];
  
  printf("%p %p\n", p, q);
  printf("%d %d\n", *p, *q);

  printf("%ld\n", q - p);

  return 0;

}
