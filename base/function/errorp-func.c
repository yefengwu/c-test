#include <stdio.h>
#include <string.h>

char * getstring();

int main(void)
{
    printf("%s\n", getstring());
    return 0;
}


char * getstring(){
    char str[20];

    strcpy(str, "hello");

    return str;
}
