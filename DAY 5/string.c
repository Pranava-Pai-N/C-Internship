#include <stdio.h>
#include <string.h>

int main() {
    char str1[] = "WORLD";
    char str2[] = "world";
    int result = strcmp(str1, str2);
    if(result == 0) 
    {
        printf("Strings are equal\n");
    } 
     else if(result==1) {
        printf("Str1 is greater than str2\n");
    }
    else{
         printf("Str2 is greater than str1\n");

    }
    return 0;
}