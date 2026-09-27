#include <stdio.h>

int main()
{
    char name[30];
    int age;
    char grade;
    printf("Enter your name: ");
    scanf(" %29[^\n]", name);
    printf("Enter your age: ");
    scanf("%d", &age);
    printf("Enter your grade: ");
    scanf(" %c", &grade);
    printf("\n");
    printf("Name\tAge\tGrade\n");
    printf("%s\t%d\t%c\n", name, age, grade);
    return 0;

}