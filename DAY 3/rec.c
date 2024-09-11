#include<stdio.h>
 int factorialProblem(int n);
  int n =0;
  void main()
  {
    int n=0;
    scanf("%d",&n);
    int factorial =factorialProblem(n);
    printf("Factorial of %d is %d",n,factorial);
      }
 int factorialProblem(int n){
    if (n<=1)return 1;
    return n*factorialProblem(n-1);
 }
