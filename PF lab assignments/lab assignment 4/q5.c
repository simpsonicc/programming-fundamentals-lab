#include <stdio.h>

int main(){
    int n = 0;
    long long numerator = 0;
    long long denominator_1 = 0; // int can't handle long fact no.s 
    long long denominator_2 = 0;
    long long calton_num = 0;

    printf("Enter a number: ");
    scanf("%d",&n);

    numerator = n*2;
    denominator_1 = n+1;
    denominator_2 = n;

    for (int i = numerator-1; i>0; i--){
        numerator = numerator * i;
    }

    for (int i = denominator_1-1; i>0; i--){
        denominator_1 = denominator_1 * i;
    }

    for (int i = denominator_2-1; i>0; i--){
        denominator_2 = denominator_2 * i;
    }
    
    calton_num = numerator/((denominator_1*denominator_2));

    printf("%lld", calton_num);
    return 0;

}