#include <stdio.h>
#include <string.h>

char * mstrcat(char * dest, char * src);

int main(int argc, char *argv[])
{
    char dest[58] = "welcome";
    char src[58] = "makeru";

    puts(mstrcat(dest, src));
    puts(dest);


    return 0;
}

char * mstrcat(char * dest, char * src)
{

    char * r = dest;

    while (*dest++);

    dest--;

    /*while (*dest)*/
    /*{*/
        /*dest++;*/
    /*}*/

    while (*src)
    {
        *dest++ = *src++;
    }

    *dest = '\0';

    return r;

}
