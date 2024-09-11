#include<stdio.h>
void staticfunction(int n){
    static int count = 0;
    printf("\nstaticfunction %d count value (initial) %d",n,count);
    for(int i=0;i<5;i++){
        count++;
    }
    count++;
    printf("\nstaticfunction %d count (end) %d ",n,count);
}
 void main(){
    staticfunction(1);
    staticfunction(2);
 }-