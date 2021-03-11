#include <stdio.h>
#include <string.h>

char * getstring();

int main(void)
{
    printf("%s\n", getstring());
    return 0;
}


char * getstring(){

    static char str[20];//静态变量的地址
    /*char * str = "hello"; 字符串常量不能修改*/

    strcpy(str, "hello");

    return str;
}
