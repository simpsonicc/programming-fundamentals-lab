#include <stdio.h>

int main() 
{
    int age; 
    float height;
    char grade; 
    printf("Enter your age: ");
    scanf("%d", &age);
    printf("Enter your height in meters: ");
    scanf("%f", &height);
    printf("Enter your grade: ");
    scanf(" %c", &grade); // space before %c to consume any leftover whitespace
    printf("Age: %d\n", age);
    printf("Height: %.2f\n", height);
    printf("Grade: %c\n", grade);
    return 0;   
}