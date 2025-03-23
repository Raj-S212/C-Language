//Write a program to find grade of a student given his marks based on below criteria :
//Marks 	Grade
//90-100 	A
//80-90     B
//70-80     C
//60-70     D
//<60 50    F
#include <stdio.h>

int main() {
    int marks;

    // Taking input for marks
    printf("Enter the marks of the student: ");
    scanf("%d", &marks);

    // Determine the grade based on the marks
    if (marks >= 90 && marks <= 100) {
        printf("Grade: A\n");
    } else if (marks >= 80 && marks < 90) {
        printf("Grade: B\n");
    } else if (marks >= 70 && marks < 80) {
        printf("Grade: C\n");
    } else if (marks >= 60 && marks < 70) {
        printf("Grade: D\n");
    } else if (marks < 60) {
        printf("Grade: F\n");
    } else {
        printf("Invalid marks\n");
    }

    return 0;
}

