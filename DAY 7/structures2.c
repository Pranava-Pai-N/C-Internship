#include <stdio.h>

struct Address {
    char city[50];
    char state[50];
};

struct Person {
    char name[50];
    int age;
    struct Address address;
};

int main() {
    struct Person person1;

    // Assigning values to nested structures
    strcpy(person1.name, "Alice");
    person1.age = 25;
    strcpy(person1.address.city, "New York");
    strcpy(person1.address.state, "NY");

    // Accessing nested structure members
    printf("Name: %s\n", person1.name);
    printf("Age: %d\n", person1.age);
    printf("City: %s\n", person1.address.city);
    printf("State: %s\n", person1.address.state);

    return 0;
}