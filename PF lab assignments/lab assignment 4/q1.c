#include <stdio.h>

int main(){
    int pin = -1;
    int sum = 0;


    while ((pin <=0) || (pin >9999)){ // validate the input and keep prompting
        printf("Enter your 4 digit pin: ");
        scanf("%d", &pin);
    }

    while (pin>0){
        sum = sum + (pin%10);
        pin = pin/10;
    }


    if (sum>10){
        printf("Strong pin\n");
    }
    else {
        printf("Weak pin\n");
    }
    return 0;
}