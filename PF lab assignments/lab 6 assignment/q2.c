#include <stdio.h>

float withdraw(float *balance, float *amount);
float deposit(float *balance, float *amount);

int main(){
    float balance = 0.0;
    float amount = 0.0;
    char choice;

    printf("Enter your current balance: ");
    scanf("%f", &balance);
    printf("Would you like to credit or debit the amount? (C for credit, and D for debit) ");
    scanf(" %c", &choice);

    if (choice == 'c' || choice == 'C'){
        printf("Enter your amount you would like to credit: ");
        scanf("%f", &amount);
        if (amount<0) {printf("Amount cannot be less than 0\n"); return 1;}
        printf("New Balance: %.3f ", deposit(&balance, &amount));
    }

    else if (choice == 'd' || choice == 'D'){
        printf("Enter your amount you would like to debit: ");
        scanf("%f", &amount);
        if (amount<0) {printf("Amount cannot be less than 0\n"); return 1;}
        printf("New Balance: %.3f", withdraw(&balance, &amount));
    }
    else{
        printf("Invalid choice\n"); 
        return 1;
    }
    return 0;
}
float withdraw(float *balance, float *amount){
    if (*amount > *balance){
        printf("Transaction declined: Insufficient Balance\n");
    }
    else{
        *balance = *balance - *amount;
        printf("Transaction Successful\n");
    }
    return *balance;
}

float deposit(float *balance, float *amount){
    *balance = *balance + *amount;
    return *balance;
}