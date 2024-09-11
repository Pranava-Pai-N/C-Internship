#include <stdio.h>
void main()
{
    int a[5] = {1, 2, 3, 4, 5,};
    int *p = a;
    int *q= &a[3];
    printf("%d",p-q);
}