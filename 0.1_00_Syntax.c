#include <stdio.h>

// Main function: entry point of the program
int main() {
    // Variables and Data Types
    int integerVar = 10;          // Integer variable
    float floatVar = 3.14;        // Float variable
    char charVar = 'A';           // Character variable
    double doubleVar = 9.87654321; // Double variable

    // Arithmetic Operators
    int sum = integerVar + 5;     // Addition
    int diff = integerVar - 3;    // Subtraction
    int product = integerVar * 2; // Multiplication
    float quotient = floatVar / 2.0; // Division
    int remainder = integerVar % 3;  // Modulus (remainder of division)

    // Logical Operators
    int logicalAnd = (integerVar > 5) && (floatVar < 4); // Logical AND
    int logicalOr = (integerVar > 5) || (floatVar < 4);  // Logical OR
    int logicalNot = !(integerVar == 10);                // Logical NOT

    // Bitwise Operators
    int bitwiseAnd = integerVar & 5; // Bitwise AND
    int bitwiseOr = integerVar | 3;  // Bitwise OR
    int bitwiseXor = integerVar ^ 2; // Bitwise XOR
    int bitwiseNot = ~integerVar;    // Bitwise NOT
    int leftShift = integerVar << 1; // Left shift
    int rightShift = integerVar >> 1; // Right shift

    // Relational Operators
    int isEqual = (integerVar == 10);   // Equal to
    int isNotEqual = (integerVar != 10); // Not equal to
    int isGreater = (integerVar > 5);   // Greater than
    int isLess = (integerVar < 15);     // Less than
    int isGreaterOrEqual = (integerVar >= 10); // Greater than or equal to
    int isLessOrEqual = (integerVar <= 10);    // Less than or equal to

    // Control Structures
    // if-else statement
    if (integerVar > 5) {
        printf("integerVar is greater than 5\n");
    } else {
        printf("integerVar is not greater than 5\n");
    }

    // switch-case statement
    switch (charVar) {
        case 'A':
            printf("charVar is A\n");
            break;
        case 'B':
            printf("charVar is B\n");
            break;
        default:
            printf("charVar is neither A nor B\n");
            break;
    }

    // for loop
    for (int i = 0; i < 5; i++) {
        printf("for loop iteration: %d\n", i);
    }

    // while loop
    int j = 0;
    while (j < 3) {
        printf("while loop iteration: %d\n", j);
        j++;
    }

    // do-while loop
    int k = 0;
    do {
        printf("do-while loop iteration: %d\n", k);
        k++;
    } while (k < 2);

    return 0; // Indicate that program ended successfully
}
