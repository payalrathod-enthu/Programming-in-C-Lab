#include <stdio.h>

// Recursive function to find factorial
unsigned long long FACT_recursive(int num) {
    if (num == 0 || num == 1)
        return 1;
    else
        return num * FACT_recursive(num - 1);
}

// Non-recursive (iterative) function to find factorial
unsigned long long FACT_iterative(int num) {
    unsigned long long fact = 1;
    int i;
    for (i = 1; i <= num; i++) {
        fact *= i;
    }
    return fact;
}

// Function to compute binomial coefficient C(n, r) = n! / (r! * (n - r)!)
unsigned long long binomialCoeff(int n, int r) {
    unsigned long long nFact = FACT_iterative(n);
    unsigned long long rFact = FACT_iterative(r);
    unsigned long long n_rFact = FACT_iterative(n - r);
    return nFact / (rFact * n_rFact);
}

int main() {
    int n, r, i, j;

    printf("Binomial Coefficient Calculator using Factorial Function\n");
    printf("--------------------------------------------------------\n");
    printf("Enter value of n: ");
    scanf("%d", &n);
    printf("Enter value of r: ");
    scanf("%d", &r);

    if (r > n || n < 0 || r < 0) {
        printf("Invalid input! (Ensure that 0 = r = n)\n");
        return 0;
    }

    // Compute binomial coefficient using recursive factorial
    unsigned long long factN_recursive = FACT_recursive(n);
    unsigned long long factR_recursive = FACT_recursive(r);
    unsigned long long factNR_recursive = FACT_recursive(n - r);
    unsigned long long binomial_recursive = factN_recursive / (factR_recursive * factNR_recursive);

    // Compute binomial coefficient using iterative factorial
    unsigned long long binomial_iterative = binomialCoeff(n, r);

    printf("\nResults:\n");
    printf("Using Recursive Factorial: C(%d, %d) = %llu\n", n, r, binomial_recursive);
    printf("Using Iterative Factorial: C(%d, %d) = %llu\n", n, r, binomial_iterative);

    printf("\n-------------------------------------------\n");
    printf("Tabulated Results for different (n, r):\n");
    printf("-------------------------------------------\n");
    printf(" n\t r\t C(n, r)\n");
    printf("-------------------------------------------\n");

    for (i = 0; i <= n; i++) {
        for (j = 0; j <= i; j++) {
            printf(" %d\t %d\t %llu\n", i, j, binomialCoeff(i, j));
        }
    }

    return 0;
}


