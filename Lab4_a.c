/*
Question:
Declare a global variable outside all functions and use it inside various functions 
to understand its accessibility.
*/

#include <stdio.h>

// Global variable
int globalVar = 10; 

void function1() {
    printf("Function1: globalVar = %d\n", globalVar);
}

void function2() {
    printf("Function2: globalVar = %d\n", globalVar);
}

int main() {
    printf("Main: globalVar = %d\n", globalVar);
    function1();
    function2();
    return 0;
}

