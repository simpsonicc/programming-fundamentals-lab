#include <stdio.h>

int main(){
    int num = 0;
    int reverse = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    while (num>0){
        reverse = (num%10) + (reverse*10);
        num = num/10;
    }

    printf("%d", reverse);
    return 0;
}