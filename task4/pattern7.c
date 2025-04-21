#include <stdio.h>

int main() {
    int i, j;

    // Upper Hollow Rectangle - 5 rows, 7 columns
    for (i = 1; i <= 5; i++) {
        for (j = 1; j <= 7; j++) {
            if (i == 1 || i == 5 || j == 1 || j == 7) {
                printf("* ");
            } else {
                printf("  ");
            }
        }
        printf("\n");
    }

    // Vertical Tail - 4 lines of single star
    for (i = 1; i <= 4; i++) {
        printf("*\n");
    }

    return 0;
}
