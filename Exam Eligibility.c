/*
Name: Allan kimutai
Reg :PA106/G/28722/25
Programm of Exam eligibility
*/

#include <stdio.h>

int main() {
    float attendance;
    float averageMarks;

    printf("Enter attendance percentage: ");
    scanf("%f", &attendance);

    printf("Enter average marks: ");
    scanf("%f", &averageMarks);

    if (attendance >= 75 && averageMarks >= 40) {
        printf("Eligible for final exams.\n");
    } else {
        printf("Not eligible.\n");
    }

    return 0;
}