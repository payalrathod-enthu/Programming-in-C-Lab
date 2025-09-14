// Q: Write a program to convert temperature from Celsius to Fahrenheit.

#include <stdio.h>

int main() {
    int celsius, fahrenheit;

    printf("Enter temperature in Celsius: ");
    scanf("%d", &celsius);

    fahrenheit = (celsius * 9 / 5) + 32;

    printf("Temperature in Fahrenheit: %d\n", fahrenheit);

    return 0;
}

