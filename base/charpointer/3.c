#include <stdio.h>
#include <ctype.h>

int main(int argc, char **argv)
{
    char *p1 = "Hello World";
    char *p2 = "Hello World";

/*    if(isalpha(*p))*/
    /*{*/
        /*if(isupper(*p))*/
        /*{*/
            /**p = tolower(*p);*/
        /*}*/
        /*else*/
        /*{*/
            /**p = toupper(*p);*/
        /*}*/
 /*   }*/

    printf("&p1=%p, %p, %s\n", &p1, p1, p1);
    printf("&p2=%p, %p, %s\n", &p2, p2, p2);

    return 0;
}
