#include <stdio.h>

// Define structure for student
struct Student {
    int rollNo;
    char name[50];
    int chemMarks;
    int mathMarks;
    int phyMarks;
    float percentage;
};

int main() {
    struct Student students[5];
    int i;

    // Input details for 5 students
    for (i = 0; i < 5; i++) {
        printf("\nEnter details of Student %d:\n", i + 1);
        printf("Roll Number: ");
        scanf("%d", &students[i].rollNo);
        printf("Name: ");
        scanf(" %[^\n]s", students[i].name);  // Accept full name with spaces
        printf("Chemistry Marks: ");
        scanf("%d", &students[i].chemMarks);
        printf("Mathematics Marks: ");
        scanf("%d", &students[i].mathMarks);
        printf("Physics Marks: ");
        scanf("%d", &students[i].phyMarks);

        // Calculate percentage
        students[i].percentage = (students[i].chemMarks + students[i].mathMarks + students[i].phyMarks) / 3.0;
    }

    // Display student results
    printf("\n--- Student Result Sheet ---\n");
    for (i = 0; i < 5; i++) {
        printf("\nRoll Number: %d\n", students[i].rollNo);
        printf("Name: %s\n", students[i].name);
        printf("Chemistry: %d\n", students[i].chemMarks);
        printf("Mathematics: %d\n", students[i].mathMarks);
        printf("Physics: %d\n", students[i].phyMarks);
        printf("Percentage: %.2f%%\n", students[i].percentage);
    }

    return 0;
}
