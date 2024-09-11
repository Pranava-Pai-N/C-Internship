#include <stdio.h>
void main()
{
    int a[10][10],rows,columns,i,j;
    printf("Enter the no of rows and columns:");
    scanf("%d%d",&rows,&columns);
    printf("Enter array elements\n");
    for (i=0;i<rows;i++)
    {
    for (j=0;j<columns;j++)
        {
            scanf("%d",&a[i][j]);
    }
    }
     printf("Array elements are:\n");
    for (i=0;i<rows;i++)
    {
    for (j=0;j<columns;j++)
       { printf("%d",a[i][j]);
       }
       printf("\n");
    }
}