#include <stdio.h>

int main(){
    int num = 0;
    int copy = 0;
    int even = 0;
    int odd = 0;

    printf("Enter a number: ");
    scanf("%d", &num);
    copy = num;

    while (copy > 0){
        if (((copy%10)%2) == 0){
            even += 1;
        }
        else {
            odd += 1;
        }
        copy = copy/10;
    }

    printf("%d has %d even digits and %d odd digits\n", num, even, odd);
    return 0;
}
