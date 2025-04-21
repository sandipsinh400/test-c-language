#include <stdio.h>

int main() {
    int i, j;

    for (i = 0; i < 5; i++) {
        // Print leading spaces
        for (j = 0; j < i; j++) {
            printf(" ");
        }

        // Print 1s and 0s starting with 1, decreasing length each row
        for (j = 0; j < 5 - i; j++) {
            if (j % 2 == 0)
                printf("1");
            else
                printf("0");
        }

        printf("\n");
    }

    return 0;
}
