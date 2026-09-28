#include <stdio.h>
#include <stdbool.h>

int main(){
    int age = 0;
    float monthly_income = 0.0;
    float credit_score = 0.0;
    bool previous_loan = false;
    int answer = 0;

    printf("Enter your age: ");
    scanf("%d", &age);
    printf("Enter your monthly income: ");
    scanf("%f", &monthly_income);
    printf("Enter your credit score: ");
    scanf("%f", &credit_score);
    printf("Do you have any previous loan? (enter 1 if yes, 0 if no) ");
    scanf("%d", &answer);
    previous_loan = (answer != 0);

    if ((age>=21) && (monthly_income>=100000.0) && (credit_score >= 750.0) && !previous_loan){
        printf("High chance of approval\n");
    }
     else if ((age>=21) && (monthly_income>=75000.0) && (credit_score >= 650.0) && previous_loan){
        printf("Manual Review\n");
    }
    else  if ((age>=21) && (monthly_income>=50000.0) && (credit_score >= 600.0)){
        printf("Possibly Eligible\n");
    }
    else {
        printf("Rejected\n");
    }
    return 0;
}