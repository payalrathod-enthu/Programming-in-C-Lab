#include <stdio.h>

// Recursive function to find nth Fibonacci number
int FIBO(int num) {
    if (num == 0)
        return 0;
    else if (num == 1)
        return 1;
    else
        return FIBO(num - 1) + FIBO(num - 2);
}

int main() {
    int num;
    int i; 

    printf("Enter the number of terms: ");
    scanf("%d", &num);

    if (num <= 0) {
        printf("Please enter a positive integer.\n");
        return 0;
    }

    printf("Fibonacci sequence up to %d terms:\n", num);

    for (i = 0; i < num; i++) {
        printf("%d ", FIBO(i));
    }
    printf("\n");

    return 0;
}

