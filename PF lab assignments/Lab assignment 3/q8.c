#include <stdio.h>

int main(){
    int value = 0;

    printf("Enter a number between 1 and 15: ");
    scanf("%d", &value);

    if ((value & 2) && (value & 8)){
        printf("You can train and deploy the model\n");
    }
    if (value & 1){
        printf("You can view the model\n");
    }
    if (value & 2){
        printf("You can train the model\n");
    }
    if (value & 4){
        printf("You can test the model\n");
    }
    if (value & 8){
        printf("You can deploy the model\n");
    }
    return 0;
}