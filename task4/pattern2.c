#include <stdio.h>

int main() {
    int i, j;
    int num = 11; // Starting number

    for (i = 1; i <= 4; i++) {           // 4 rows
        for (j = 1; j <= i; j++) {       // j goes from 1 to current row number
            printf("%d ", num);
            num++;                       // increment number
        }
        printf("\n");
    }

    return 0;
}
