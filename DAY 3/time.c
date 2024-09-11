#include<Stdio.h>


void Add(int a[][],int b[][],int c[][],int n,int m){
    for(int i=1;i<=n;i++)
    for(int j =1;j<=m;j++)
    c[i][j]=a[i][j]+b[i][j];
}

 void AddRange(int n){
    int sum=0;
    for(int i=0;i<=n;i++)
    sum += i;
    printf("Sum:%d",sum);
     }