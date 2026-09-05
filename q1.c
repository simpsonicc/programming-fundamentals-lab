#include <stdio.h>

int main() { // indicates the start of the program 
    char name[30]; // string as array of characters
    char city [30];
    int age;
    printf("Enter your name: ");
    scanf(" %29[^\n]", name); // read a string with spaces. %29 means don't read more than 29 characters to avoid buffer overflow
    //[^\n] means read until a newline character is encountered. (^= read until...) 
    printf("Enter your city: ");
    scanf(" %29[^\n]", city);
    printf("enter your age: ");
    scanf("%d", &age);
    printf("Name: %s\n", name);
    printf("Age: %d\n", age);
    printf("City: %s\n", city); 
    return 0;
}