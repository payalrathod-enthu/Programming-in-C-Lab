#include <stdio.h>

// Recursive function to find GCD
int GCD(int num1, int num2) {
    if (num2 == 0)
        return num1;
    else
        return GCD(num2, num1 % num2);
}

int main() {
    int num1, num2;
    
    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);
    
    if (num1 < 0) num1 = -num1;  
    if (num2 < 0) num2 = -num2;

    printf("The GCD of %d and %d is: %d\n", num1, num2, GCD(num1, num2));
    
    return 0;
}

