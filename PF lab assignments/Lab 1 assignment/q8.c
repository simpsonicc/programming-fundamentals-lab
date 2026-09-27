#include <stdio.h>
int main()
{
    char name[50];
    printf("Enter your full name: ");
    scanf(" %29[^\n]", name);
    printf("Hello,\n%s", name);
    return 0;
}