#include<stdio.h>
#include<string.h>
void main()
{
    char ch;
    printf("Enter a character:");
    scanf("%c",&ch);
      if(ch>='A'&&ch<='Z'){
        ch=ch+32;
        printf("%c",ch);
      }
      else{
        ch=ch-32;
        printf("%c",ch);
      }
    }