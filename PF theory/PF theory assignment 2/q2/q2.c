#include <stdio.h>

int divisor_sum(int n);
int main(){
    int n = 0;
    // printf("%d", divisor_sum(9));

    printf("Enter number to find its amicable pair: ");
    scanf("%d", &n);
    // printf("%d\n", divisor_sum(284));

    int num1 = 0;
    int num2 = 0;
    int count = 0;
    // for (int i = n; i>0; i--){
    //     values[i] = i;
    // }

    for (int j = 2; j<=n; j++){
        num1 = divisor_sum(j);
        num2 = divisor_sum(num1);
        if ((num2 == j) && (num1 != j) && (j<num1)){ // second condition ensures the sum isnt same as 
            // the number itself. Third one prevents duplicacy 
                count += 1;
                if (count == 1){
                    printf("Amicable pairs up to %d:\n", n);
                }
                printf("(%d , %d)\n", j, num1);
            }
    }
    printf("Total pairs: %d", count);
}

int divisor_sum(int n){
    int sum = 0;
    for (int i = 1; i<=n/2; i++){
        if ((n % i) == 0){
            sum = sum+i;
        }
    }
    return sum;
}