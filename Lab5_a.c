/*
Question:
WAP to read a list of integers and store it in a single dimensional array.
Write a C program to print the second largest integer in a list of integers.
*/
#include <stdio.h>

int main() {
    int n,i;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int largest, secondLargest;
    // Initialize
    if (arr[0] > arr[1]) {
        largest = arr[0];
        secondLargest = arr[1];
    } else {
        largest = arr[1];
        secondLargest = arr[0];
    }
    // Find largest and second largest
    for (i = 2; i < n; i++) {
        if (arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        } else if (arr[i] > secondLargest && arr[i] != largest) {
            secondLargest = arr[i];
        }
    }
    printf("The second largest element is: %d\n", secondLargest);

    return 0;
}

