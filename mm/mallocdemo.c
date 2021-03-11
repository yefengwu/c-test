#include <stdio.h>
#include <stdlib.h>

int main()
{
    char *p;
    p = (char *)malloc(10 * sizeof(char));
    if (p == NULL)
    {
        printf("malloc failed\n");
        return 0;
    }

    printf("p=%p\n", p);
    printf("input:");
    scanf("%s", p);
    printf("p=%s\n", p);


    free(p);//释放内存后p指针仍指向该位置
    p = NULL;
    /*printf("%p\n", p);*/

    return 0;
}
