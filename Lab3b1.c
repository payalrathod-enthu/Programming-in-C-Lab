#include <stdio.h>

int main() {
    double population = 100000; 
    double growthRate = 0.10;   
    int year;

    printf("Year\tPopulation\n");
    for (year = 1; year <= 10; year++) {
        population = population + population * growthRate; 
        printf("%d\t%.0lf\n", year, population); 
    }

    return 0;
}

