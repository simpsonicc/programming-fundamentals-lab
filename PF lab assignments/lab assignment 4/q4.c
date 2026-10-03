#include <stdio.h>

int main(){
    int num = 0;
    int palindrome = 0;
    int count =0;

    printf("Enter number: ");
    scanf("%d", &num);
    int copy = num;

    while (copy>0){
        palindrome = (copy%10) + (palindrome*10);
        copy = copy/10;
    }

    if (palindrome == num){
        printf("%d is a palindrome\n",num);
    }
    else{
        printf("%d is not a palindrome\n",num);
    }
    return 0;
}
