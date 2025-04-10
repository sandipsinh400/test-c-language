

#include <stdio.h>

int main() {
    int score;
    char grade;

    // Input score
    printf("Enter your score (0 - 100): ");
    scanf("%d", &score);

    // Validate score
    if (score < 0 || score > 100) {
        printf("Invalid score! Please enter a value between 0 and 100.\n");
        return 1;
    }

    // Assign grade using ternary operator
    grade = (score >= 90) ? 'A' :
            (score >= 80) ? 'B' :
            (score >= 70) ? 'C' :
            (score >= 60) ? 'D' : 'F';

    // Print grade
    printf("Your Grade: %c\n", grade);

    // Comments using switch-case
    switch (grade) {
        case 'A':
            printf("Excellent! Keep it up.\n");
            break;
        case 'B':
            printf("Very Good! You can reach A next time.\n");
            break;
        case 'C':
            printf("Good. But there's room for improvement.\n");
            break;
        case 'D':
            printf("You passed, but you should work harder.\n");
            break;
        case 'F':
            printf("Fail. Better luck next time.\n");
            break;
        default:
            printf("Unexpected grade.\n");
    }

    // Check  next level
    if (grade == 'A' || grade == 'B' || grade == 'C') {
        printf("Eligible for the next level.\n");
    } else {
        printf("Not eligible for the next level.\n");
    }
    return 0;
}