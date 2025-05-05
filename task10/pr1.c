#include <stdio.h>

int main() {
    FILE *evenFile, *oddFile;
    int i;

    // Open files in write mode
    evenFile = fopen("even_file.txt", "w");
    oddFile = fopen("odd_file.txt", "w");

    if (evenFile == NULL || oddFile == NULL) {
        printf("Error opening files.\n");
        return 1;
    }

    // Write even and odd numbers to respective files
    for (i = 50; i <= 70; i++) {
        if (i % 2 == 0) {
            fprintf(evenFile, "%d,", i);
        } else {
            fprintf(oddFile, "%d,", i);
        }
    }

    fclose(evenFile);
    fclose(oddFile);

    // Display the contents of the files
    char ch;

    printf("Even numbers from even_file.txt:\n");
    evenFile = fopen("even_file.txt", "r");
    while ((ch = fgetc(evenFile)) != EOF) {
        putchar(ch);
    }
    fclose(evenFile);

    printf("\nOdd numbers from odd_file.txt:\n");
    oddFile = fopen("odd_file.txt", "r");
    while ((ch = fgetc(oddFile)) != EOF) {
        putchar(ch);
    }
    fclose(oddFile);

    return 0;
}
