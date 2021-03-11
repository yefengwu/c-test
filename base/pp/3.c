#include <stdio.h>

int main(int argc, char **argv)
{
    char *s[] = {"apple", "pear"};
    char **p;
    int i, n;


    i = 0;
    n = sizeof(s) / sizeof(char *);
    p = s;


    while(i < n)
    {
        printf("%s %s\n", s[i], *(p + i));
        i++;
    }

    return 0;
}
