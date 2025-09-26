#include <stdio.h>

int main() {
    int rows = 5, i, j, space;
    long long num;

    for (i = 0; i < rows; i++) {
        for (space = 0; space < rows - i - 1; space++) {
            printf(" ");
        }

        num = 1; 
        for (j = 0; j <= i; j++) {
            printf("%lld ", num);
            num = num * (i - j) / (j + 1); 
        }
        printf("\n");
    }

    return 0;
}


