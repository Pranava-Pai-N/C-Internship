#include<stdio.h>
int main(){
    FILE *filepointer;
    filepointer =fopen("pranav.txt","w");
    if(filepointer==NULL){
        printf("File could not be opened\n");
        return 1;
    }
        fprintf(filepointer,"Hello I am Pranava Pai N from Scem\n");
    fclose:filepointer;
    printf("File written successfully");
    return 0;
}