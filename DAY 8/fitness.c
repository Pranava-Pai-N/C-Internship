#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char name[50];
    int age;
    float height;
    float weight;
    int calories_burned;
    int calories_consumed;
} FitnessData;

FitnessData user;

void get_user_info() {
    printf("Enter your name: ");
    scanf("%s", user.name);

    printf("Enter your age: ");
    scanf("%d", &user.age);

    printf("Enter your height (in meters): ");
    scanf("%f", &user.height);

    printf("Enter your weight (in kilograms): ");
    scanf("%f", &user.weight);
    user.calories_burned = 0;
    user.calories_consumed = 0;
}

void track_calories_burned(int calories) {
    user.calories_burned += calories;
}

void track_calories_consumed(int calories) {
    user.calories_consumed += calories;
}

void display_fitness_summary() {
    printf("\nFitness Summary:\n");
    printf("Name: %s\n", user.name);
    printf("Age: %d\n", user.age);
    printf("Height: %.2f meters\n", user.height);
    printf("Weight: %.2f kilograms\n", user.weight);
    printf("Calories Burned: %d\n", user.calories_burned);
    printf("Calories Consumed: %d\n", user.calories_consumed);
    printf("Net Calories: %d\n", user.calories_burned - user.calories_consumed);
}

int main() {
    get_user_info();

    int choice;

    do {
        printf("\nChoose an option:\n");
        printf("1. Track Calories Burned\n");
        printf("2. Track Calories Consumed\n");
        printf("3. Display Fitness Summary\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter calories burned: ");
                int burned;
                scanf("%d", &burned);
                track_calories_burned(burned);
                break;
            case 2:
                printf("Enter calories consumed: ");
                int consumed;
                scanf("%d", &consumed);
                track_calories_consumed(consumed);
                break;
            case 3:
                display_fitness_summary();
                break;
            case 4:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 4);

    return 0;
}