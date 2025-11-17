#include <stdio.h>
#include <string.h>

// Function to reverse a string
void REVERSE(char str[]) {
    int i, len;
    char temp;
    len = strlen(str);  

    for (i = 0; i < len / 2; i++) {
        temp = str[i];
        str[i] = str[len - i - 1];
        str[len - i - 1] = temp;
    }
}

int main() {
    char str[100];

    printf("Enter a string: ");
    gets(str); 

    REVERSE(str);

    printf("Reversed string: %s\n", str);

    return 0;
}

