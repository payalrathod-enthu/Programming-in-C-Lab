// Write a program to calculate the area and perimeter of a rectangle given its length and breadth.
#include <stdio.h>

int main() {
    int length, breadth;
    int area, perimeter;

    printf("Enter length and breadth of rectangle: ");
    scanf("%d %d", &length, &breadth);

    area = length * breadth;
    perimeter = 2 * (length + breadth);

    printf("Area = %d, Perimeter = %d\n", area, perimeter);

    return 0;
}

