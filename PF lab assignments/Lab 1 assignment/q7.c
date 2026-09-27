#include <stdio.h>
int main()
{
    char user_char;
    printf("Enter a single character: ");
    user_char = getchar();
    printf("You Entered:%c\n", user_char);
    return 0;
}