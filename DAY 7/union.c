#include<stdio.h>
struct student
{
   int a;
   char b;
   double c;
};
int main(){
    struct student u;
      u.a=10;
      u.b='G';
      u.c=19.9;
      printf("%d\n",sizeof(u));
}  

