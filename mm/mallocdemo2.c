#include <stdio.h>
#include <stdlib.h>

char * get_string(){
    /*char s[] = "welcome";*/
    /*static char s[] = "welcome";*/
    /*char * s ="welcome";*/
    char * s;

    s = (char *)malloc(10 * sizeof(char));
    if (s == NULL)
    {
        printf("malloc failed\n");
        return 0;
    }

    printf("input:");
    scanf("%s", s);
    printf("s=%s\n",s);

    return s;
}

int main()
{

    char *p;
    p = get_string();
    printf("%s\n", p);

    free(p);//释放内存后p指针仍指向该位置
    p = NULL;

    return 0;
}
