#include <stdio.h>

// Function Declaration (Prototype)
int add(int a, int b);
void printMessage();
float multiply(float x, float y);
int findMax(int num1, int num2);

int main() {
    // Function Calling
    int sum = add(10, 20);        // Calling the add function
    printMessage();               // Calling the printMessage function
    float product = multiply(3.5, 2.0); // Calling the multiply function
    int max = findMax(100, 200);  // Calling the findMax function

    // Printing the results
    printf("Sum: %d\n", sum);
    printf("Product: %.2f\n", product);
    printf("Max: %d\n", max);

    return 0; // Indicate that program ended successfully
}

// Function Definition: add
// This function takes two integers as parameters and returns their sum.
int add(int a, int b) {
    return a + b; // Return the sum of a and b
}

// Function Definition: printMessage
// This function takes no parameters and returns no value.
// It simply prints a message to the console.
void printMessage() {
    printf("Hello, this is a message from printMessage function.\n");
}

// Function Definition: multiply
// This function takes two float numbers as parameters and returns their product.
float multiply(float x, float y) {
    return x * y; // Return the product of x and y
}

// Function Definition: findMax
// This function takes two integers as parameters and returns the larger of the two.
int findMax(int num1, int num2) {
    if (num1 > num2) {
        return num1; // Return num1 if it is greater than num2
    } else {
        return num2; // Return num2 otherwise
    }
}
