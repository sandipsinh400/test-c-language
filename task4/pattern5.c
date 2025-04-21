#include <stdio.h>

int main() {
    int i, j;

    for (i = 5; i >= 1; i--) {
        // Print leading spaces
        for (j = 1; j < i; j++) {
            printf("  ");
        }

        // Print increasing numbers
        for (j = i; j <= 5; j++) {
            printf("%d ", j);
        }

        // Print decreasing numbers
        for (j = 5 - 1; j >= i; j--) {
            printf("%d ", j);
        }

        printf("\n");
    }

    return 0;
}
