#include <stdio.h>

int main(int argc, char **argv)
{
  double a;
  double *p;
  p = &a;
  printf("%ld %ld %p\n", sizeof(double), sizeof(p), p);
}
