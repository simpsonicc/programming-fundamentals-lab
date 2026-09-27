#include <stdio.h>
int main()
{
    char name[50];
    int age;
    float height,cgpa;
    char grade;
    printf("Enter your name: ");
    scanf(" %49[^\n]", name);
    printf("Enter your age: ");
    scanf("%d", &age);
    printf("Enter your height: ");
    scanf("%f", &height);
    printf("Enter your grade: ");
    scanf(" %c", &grade);
    printf("Enter yor CGPA: ");
    scanf("%f", &cgpa);
    printf("\t\t\tStudent Report\n");
    printf("Name:\t%s\nAge:\t%d\nHeight:\t%.2f\nGrade:\t%c\nCGPA:\t%.2f\n",name, age, height, grade, cgpa);
    return 0;
}