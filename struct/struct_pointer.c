#include <stdio.h>

#define N 20
struct student{
    int no;
    char name[N];
    float socre;
};

void print_into(struct student * p, int n)
{

    int i;
    for(i = 0; i < n; i++)
    {
        printf("%d-%s-%f\n", p[i].no, p[i].name, p[i].socre);
        printf("%d-%s-%f\n", p->no, p->name, p->socre);
    }

}

int main(int argc, char *argv[])
{
    struct student s1[]= {{1, "s1", 90}, {2, "s2", 88}, {3, "s3", 89}};
    
    print_into(s1, sizeof(s1)/sizeof(s1[0]));

    return 0;
}

