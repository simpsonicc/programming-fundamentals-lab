#include <stdio.h>

int main(){
    int temp1, temp2, battery;
    bool obstacle, person;

    printf("Obstacle detected? ");
    scanf("%d", &temp1);
    printf("Person detected? ");
    scanf("%d", &temp2);
    printf("Battery percentage? \n");
    scanf("%d", &battery);
    obstacle = temp1;
    person = temp2;

    if (obstacle && person){
        printf("Emergency stop!\n");
    }
    else if (obstacle){
        printf("Change direction.\n");
    }
    else if (battery < 20){
        printf("Return to charging station.\n");
    }
    else{
        printf("Continue moving.\n");
    }
    return 0;
}