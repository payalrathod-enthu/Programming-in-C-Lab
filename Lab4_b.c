/*
Question:
Declare a global variable and a local variable, then use them to understand
the difference in scope and accessibility.
*/

#include <stdio.h>

// Global variable
int globalVar = 20;  

void testFunction() {
    int localVar = 10; // Local variable
    printf("Inside function: localVar = %d\n", localVar);
    printf("Inside function: globalVar = %d\n", globalVar);
}

int main() {
    testFunction();
    printf("Inside main: globalVar = %d\n", globalVar);
    return 0;
}

