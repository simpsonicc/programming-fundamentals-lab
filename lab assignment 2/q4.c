#include <stdio.h> 

int main(){
    float accuracy;
    int latency;
    int temp;
    bool status;

    printf("Enter the accuracy of the model, it's prediction latency and approved status: ");
    scanf("%f%d%d", &accuracy, &latency, &temp);
    status = temp; // cant take input in bool directly cos no idenfier for its input (like %d for int)

    if (accuracy < 90){
        printf("Accuracy too low.\n");
    }
    else if (latency > 100){
        printf("latency too high.\n");
    }
    else if (!(status)){
        printf("Model not approved.\n");
    }
    else{
        printf("Model is ready to be deployed.\n");
    }
    return 0;
}   