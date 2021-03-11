#include <stdio.h>
#include <string.h>

char * del_space(char * s);

int main(int argc, char *argv[])
{
    /*char * r;*/
    char str[] = "hello world   aksdjfal";
    char s[59], s2[58];

    /*r = del_space(str);*/
    /*puts(r);*/

    /*strcpy(s, del_space(str));*/
    strcpy(s2, strcpy(s, del_space(str)));
    puts(str);
    puts(s2);

    return 0;
}


char * del_space(char * s)
{
    char * r = s;
    char * p = s;

    while (*s)
    {
        if (*s == ' ')
        {
            s++;
        }
        else
        {
            *p = *s;
            s++;
            p++;
        }
    }
    *p = '\0';

    return r;
    
}
