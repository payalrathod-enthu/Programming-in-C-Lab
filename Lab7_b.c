#include <stdio.h>

struct Employee {
    char name[50];
    float basic_pay;
    float gross_salary;
};

int main() {
    struct Employee emp;
    int i;

    for(i = 1; i <= 100; i++) {
        printf("\n----- Employee %d -----\n", i);

        printf("Enter employee name: ");
        scanf("%s", emp.name);

        printf("Enter basic pay: ");
        scanf("%f", &emp.basic_pay);

        float DA = 0.52 * emp.basic_pay;

        emp.gross_salary = emp.basic_pay + DA;

        printf("Gross Salary of %s = %.2f\n", emp.name, emp.gross_salary);
    }

    return 0;
}

