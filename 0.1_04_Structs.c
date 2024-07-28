#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Define a structure named 'Person'
struct Person {
    char name[50]; // Member to store the name of the person
    int age;       // Member to store the age of the person
    float height;  // Member to store the height of the person in meters
};

int main() {
    // Part 1: Using a structure variable

    // Declare a variable of type 'struct Person'
    struct Person person1;

    // Assign values to the members of the structure
    strcpy(person1.name, "Alice");
    person1.age = 30;
    person1.height = 1.75;

    // Print the values of the structure members
    printf("Using structure variable:\n");
    printf("Name: %s\n", person1.name);
    printf("Age: %d\n", person1.age);
    printf("Height: %.2f meters\n", person1.height);

    // Part 2: Using a pointer to structure

    // Declare a pointer to 'struct Person'
    struct Person *personPtr;

    // Allocate memory for a 'struct Person' instance
    personPtr = (struct Person *)malloc(sizeof(struct Person));

    // Check if memory allocation was successful
    if (personPtr == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    // Assign values to the members of the structure using the pointer
    strcpy(personPtr->name, "Bob");
    personPtr->age = 25;
    personPtr->height = 1.80;

    // Access and print the values using the pointer
    printf("\nUsing pointer to structure:\n");
    printf("Name: %s\n", personPtr->name);
    printf("Age: %d\n", personPtr->age);
    printf("Height: %.2f meters\n", personPtr->height);

    // Free the allocated memory
    free(personPtr);

    return 0;
}
