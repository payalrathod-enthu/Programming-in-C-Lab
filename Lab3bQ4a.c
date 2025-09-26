#include <stdio.h>

int main() {
    int i, j, k, num = 1, rows = 3; 

    for (i = 1; i <= rows; i++) {
        for (j = 1; j <= rows - i; j++) {
            printf(" ");
        }
        for (k = 1; k <= i; k++) {
            printf("%d ", num);
            num++;
        }
        printf("\n");
    }

    return 0;
}

