#include <stdio.h>
#include <string.h>

int main(int argc, char **argv)
{
    char ch[50] = "welcome";
    char *p = "Hello World", *q;

    /*strcat(ch, p1);*/
    int i = 0;

    q = p;
    while(*(ch+i) != '\0')
    {
        i++;
    }
    while(*p != '\0')
    {
        *(ch+i) = *p;
        i++;
        p++;
    }

    *(ch+i) = *p;
    p = q;

    puts(ch);
    puts(p);

    return 0;
}
