#include<stdio.h>
 int factorialProblem(int n); 
void main()
{
  int n=0;
  scanf("%d",&n);
  int factorial = factorialProblem(n);
  printf("Factorial is %d",factorial);
}
  
  int factorialProblem(int n){
   int factorial =1;
   while(n>0){
     factorial=factorial*n;
     n--;
  }
  return factorial;
  }
    