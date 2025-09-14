#include <stdio.h>

int main() {
    int year, day = 0, i;

    printf("Enter year: ");
    scanf("%d", &year);

    for (i = 1; i < year; i++) {
        if ((i % 400 == 0) || ((i % 4 == 0) && (i % 100 != 0))) {
            day += 366;  
        } else {
            day += 365; 
        }
    }
    day = day % 7;

    printf("Day on 1st January %d is: ", year);
    switch (day) {
        case 0: printf("Monday\n"); break;
        case 1: printf("Tuesday\n"); break;
        case 2: printf("Wednesday\n"); break;
        case 3: printf("Thursday\n"); break;
        case 4: printf("Friday\n"); break;
        case 5: printf("Saturday\n"); break;
        case 6: printf("Sunday\n"); break;
    }

    return 0;
}

