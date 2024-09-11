#include <stdio.h>
struct employee {
    int id;
    char name[50];
    float salary;
};
int main() {
    struct employee emp[3];
    int i,n,Index = 0;
    printf("Enter no of Employees:");
    scanf("%d",&n);
    for(i = 0; i < n; i++) {
        printf("Enter details for employee %d:\n",i+1);
        printf("ID: ");
        scanf("%d", &emp[i].id);
        printf("Name: ");
        scanf("%s", emp[i].name);
        printf("Salary: ");
        scanf("%f", &emp[i].salary);
    }
    // Find employee with the highest salary
    for(i = 1; i < n; i++) {
        if(emp[i].salary > emp[Index].salary) {
            Index = i;
        }
    }

    // Display the employee with the highest salary
    printf("\nEmployee with the highest salary:\n");
    printf("ID: %d\n",emp[Index].id);
    printf("Name: %s\n",emp[Index].name);
    printf("Salary: %.0f\n",emp[Index].salary);

    return 0;
}
