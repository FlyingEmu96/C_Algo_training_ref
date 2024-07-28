#include <stdio.h>

// Function that takes a pointer to an integer as a parameter
void increment(int *p);

// Function that returns a pointer to an integer
int* getPointerToMax(int *a, int *b);

int main() {
    // Pointer Basics
    int var = 10;      // Integer variable
    int *ptr;          // Pointer to an integer
    ptr = &var;        // Pointer 'ptr' now holds the address of 'var'

    // Printing the value of 'var' using pointer
    printf("Value of var: %d\n", var);
    printf("Value of var using pointer: %d\n", *ptr);

    // Pointer Arithmetic
    int arr[5] = {10, 20, 30, 40, 50};
    int *ptrArr = arr; // Pointer to the first element of the array

    // Printing array elements using pointer arithmetic
    for (int i = 0; i < 5; i++) {
        printf("Element %d: %d\n", i, *(ptrArr + i));
    }

    // Pointers and Arrays
    // Array name 'arr' is essentially a pointer to the first element
    printf("First element using array name: %d\n", arr[0]);
    printf("First element using pointer: %d\n", *arr);

    // Pointers and Functions
    int num = 5;
    printf("Value of num before increment: %d\n", num);
    increment(&num); // Passing pointer to the function
    printf("Value of num after increment: %d\n", num);

    int a = 100, b = 200;
    int *maxPtr = getPointerToMax(&a, &b); // Getting pointer to max value
    printf("Max value is: %d\n", *maxPtr);

    return 0; // Indicate that program ended successfully
}

// Function Definition: increment
// This function takes a pointer to an integer and increments the value it points to
void increment(int *p) {
    (*p)++; // Increment the value pointed to by p
}

// Function Definition: getPointerToMax
// This function takes two pointers to integers and returns a pointer to the larger integer
int* getPointerToMax(int *a, int *b) {
    if (*a > *b) {
        return a; // Return pointer to 'a' if it is greater than 'b'
    } else {
        return b; // Return pointer to 'b' otherwise
    }
}
