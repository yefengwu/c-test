#include <stdio.h>

union gy
{
    char a;
    short b;
    int c;

}v2;


int main(int argc, const char *argv[])
{
    union gy v1;
    char *p;
    int i;

    printf("%ld %ld %ld\n", sizeof(char), sizeof(short), sizeof(int));
    printf("%ld \n", sizeof(union gy));
    
    v1.a = 'A';
    v1.b = 20;
    v1.c = 0x12345678;

    printf("%p %p %p\n", &v1.a, &v1.b, &v1.c);

    p = (char *)&v1;

    for (i = 0;i < sizeof(union gy); i++)
    {
        printf("%#x\n", *p);
        p++;
    }

    return 0;
}
