#include <stdio.h>

int main() {
    char str[100];
    char *ptr;
    int length = 0;

    printf("Enter any string: ");
    fgets(str, sizeof(str), stdin);  // safer than gets()

    ptr = str;  // pointer points to the first character of string

    while (*ptr != '\0') {
        if (*ptr != '\n')  // to ignore newline from fgets
            length++;
        ptr++;  // move pointer to next character
    }

    printf("The length of a string is: %d\n", length);
    return 0;
}
