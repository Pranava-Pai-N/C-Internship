#include<stdio.h>
void main()
{
    int a=10;
    int *p=&a;
    int **ptr=&p;
    printf("%d\n",a);
    printf("%d\n",*p);
    printf("%d\n",p);
    printf("%d\n",&p);
    printf("%d\n",*ptr);
    printf("%d\n",ptr);
    printf("%d\n",**ptr);
}