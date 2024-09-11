#include <stdio.h>
void main()
{
    int a;
    scanf("%d", &a);
    switch(a%2)
    {
        case 0:
             printf("Number is Even");
        break;
        case 1:
             printf("Number is Odd");
        break;
             default:printf("Invalid data");
        } 
}