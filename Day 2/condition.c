#include<stdio.h>
void main()
      {
    int aNum1=0,aNum2;
    printf("Enter two numbers aNum1 and aNum2:");
    scanf("%d%d",&aNum1,&aNum2);
    printf("aNum1 mod aNum2 -%d\n",aNum1%aNum2);
    if(aNum1%aNum2==0){
        printf("It is divisible");
    }
     else if(((aNum1+1)%aNum2)==0){
       printf("If we add 1 to num1 then it is divisible");
     }
     else if(((aNum1+2)%aNum2)==0){
       printf("If we add 2 to num1 then it is divisible");
     }
     else{
      printf("It is not divisible");
     }
      }