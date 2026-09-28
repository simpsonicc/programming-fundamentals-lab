#include <stdio.h>
#include <stdbool.h>

int main(){
    bool type = false;
    int answer = 0;
    float confidence_score = 0.0;

    printf("Enter your confidence score: ");
    scanf("%f", &confidence_score);
    printf("Are you authorised member or unauthorised member: (enter 1 if yes, else 0) ");
    scanf("%d", &answer);
    type = (answer != 0);

    if ((confidence_score<50) || !type){
        printf("Access Denied\n");
    }
    else{
        printf("%s\n", (confidence_score>=80)  ? "Face recognised\nAccess Granted": "Manual verification");
        // tenary operator is used instead of if else, its used inside print statement and other places 
        // format: (<condition> ? "<if its true>":"<if its false>")
        }

    return 0;
}