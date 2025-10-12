/*
Question:
WAP to read a list of integers and store it in a single dimensional array.
Write a C program to find the frequency of a particular number in a list of integers.
*/

#include <stdio.h>

int main() {
    int n, i, num, count = 0;
    
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Input number to find frequency of
    printf("Enter the number to find its frequency: ");
    scanf("%d", &num);

    // Count occurrences of the number
    for (i = 0; i < n; i++) {
        if (arr[i] == num)
            count++;
    }

    printf("The number %d appears %d time(s) in the array.\n", num, count);

    return 0;
}

