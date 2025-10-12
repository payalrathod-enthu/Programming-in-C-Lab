/*
Question:
WAP to read a list of integers and store it in a single dimensional array.
Write a C program to count and display positive, negative, odd, and even numbers in an array.
*/
#include <stdio.h>

int main() {
    int n,i;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];
    int positive = 0, negative = 0, even = 0, odd = 0;

    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    // Process array elements
    for (i = 0; i < n; i++) {
        if (arr[i] > 0)
            positive++;
        else if (arr[i] < 0)
            negative++;

        if (arr[i] % 2 == 0)
            even++;
        else
            odd++;
    }
    printf("\nCount of positive numbers: %d\n", positive);
    printf("Count of negative numbers: %d\n", negative);
    printf("Count of even numbers: %d\n", even);
    printf("Count of odd numbers: %d\n", odd);

    return 0;
}

