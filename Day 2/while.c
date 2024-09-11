#include<stdio.h>
void main()
{
  int n=0,factorial=1;
  printf("Enter a number\n");
  scanf("%d",&n);
        while(n>0){
     factorial=factorial*n;
     n--;
    }
    printf("Factorial is %d",factorial);
    }
