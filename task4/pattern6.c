#include <stdio.h>

int main() {
    int i, j, space;
    int n = 5;  // Total number of rows

    for (i = 1; i <= n; i++) {
        // Print left increasing numbers
        for (j = 1; j <= i; j++) {
            printf("%d", j);
        }

        // Print spaces
        space = 2 * (n - i);
        for (j = 1; j <= space; j++) {
            printf(" ");
        }

        // Print right decreasing numbers
        for (j = i; j >= 1; j--) {
            printf("%d", j);
        }

        printf("\n");
    }

    return 0;
}
