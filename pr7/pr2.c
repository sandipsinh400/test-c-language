#include <stdio.h>

int main() {
    char str[100];
    int i, j, length = 0;
    int count;
    int visited[100] = {0}; // To mark characters that are already counted

    printf("Enter any string: ");
    scanf("%s", str);

    // Calculate the length of the string manually
    while (str[length] != '\0') {
        length++;
    }

    printf("\nFrequency of each letter:\n");

    for (i = 0; i < length; i++) {
        if (visited[i] == 1)
            continue;

        count = 1; // At least one occurrence (the current character)
        for (j = i + 1; j < length; j++) {
            if (str[i] == str[j]) {
                count++;
                visited[j] = 1; // Mark as visited
            }
        }
        printf("%c => %d\n", str[i], count);
    }

    return 0;
}
