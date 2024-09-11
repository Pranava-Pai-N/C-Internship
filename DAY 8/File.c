#include<stdio.h>
int main(){
    FILE *filepointer;
    filepointer =fopen("pranav.txt","r");
    if(filepointer==NULL){
        printf("File does not exist\n");
        return 1;
    }
    else{
        printf("File exists\n");
    }
    fclose:filepointer;
    return 0;
}