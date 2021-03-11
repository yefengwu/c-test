#include <stdio.h>

int main(int argc, const char ** argv)
{
    //const char ** argv
    int i;
    printf("argc = %d\n", argc);

    for(i = 0; i < argc; i++)
    {
        printf("%s\n", argv[i]);
    }
    return 0;
}
