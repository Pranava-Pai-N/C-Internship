#include <stdio.h>
int main()
//Without structures
{
    char name1[50] = "John";
    int age1 = 30;
    float height1 = 5.9;

    char name2[50] = "Alice";
    int age2 = 25;
    float height2 = 5.5;

    printf("Name:%s  Age:%d  Height:%.1f\n",name1,age1,height1);
    printf("Name:%s  Age:%d  Height:%.1f\n",name2,age2,height2);
}