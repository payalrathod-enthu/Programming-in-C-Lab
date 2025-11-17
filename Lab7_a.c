#include <stdio.h>

struct Complex {
    float real;
    float imag;
};

struct Complex read() {
    struct Complex c;
    printf("Enter real part: ");
    scanf("%f", &c.real);
    printf("Enter imaginary part: ");
    scanf("%f", &c.imag);
    return c;
}

void write(struct Complex c) {
    printf("%.2f + %.2fi\n", c.real, c.imag);
}

struct Complex add(struct Complex a, struct Complex b) {
    struct Complex result;
    result.real = a.real + b.real;
    result.imag = a.imag + b.imag;
    return result;
}

struct Complex sub(struct Complex a, struct Complex b) {
    struct Complex result;
    result.real = a.real - b.real;
    result.imag = a.imag - b.imag;
    return result;
}

int main() {
    struct Complex c1, c2, sum, diff;

    printf("Enter first complex number:\n");
    c1 = read();

    printf("Enter second complex number:\n");
    c2 = read();

    sum = add(c1, c2);
    diff = sub(c1, c2);

    printf("\nSum = ");
    write(sum);

    printf("Difference = ");
    write(diff);

    return 0;
}

