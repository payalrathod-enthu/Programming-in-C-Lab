#include <stdio.h>

// Function to check if a number is prime
int ISPRIME(int num) {
    int i;
    // 0 and 1 are not prime
    if (num <= 1)
        return 0;

    // Check divisibility from 2 to num/2
    for (i = 2; i <= num / 2; i++) {
        if (num % i == 0)
            return 0; // Not a prime number
    }
    return 1; // Prime number
}
int main() {
    int lower, upper;
    int i;

    printf("Enter the lower range: ");
    scanf("%d", &lower);
    printf("Enter the upper range: ");
    scanf("%d", &upper);
    if (lower > upper) {
        printf("Invalid range! Lower limit should be less than or equal to upper limit.\n");
        return 0;
    }
    printf("\nPrime numbers between %d and %d are:\n", lower, upper);
    for (i = lower; i <= upper; i++) {
        if (ISPRIME(i))
            printf("%d ", i);
    }

    printf("\n");
    return 0;
}

