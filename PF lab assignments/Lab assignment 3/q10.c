#include <stdio.h>
#include <stdbool.h>
#include <math.h>

int main(){
    float accuracy = 0.0;
    float confidence = 0.0;
    int data_set = 0;
    int user_role = 0;
    int model_status = 0;
    float model_score = 0.0;
    int value = 0;
    bool view = false;
    bool train = false;
    bool test = false; 
    bool deploy = false;

    printf("Enter the model's accuracy: ");
    scanf("%f", &accuracy);
    printf("Enter the model's confidence: ");
    scanf("%f", &confidence);
    printf("Enter the data set value: ");
    scanf("%d", &data_set);
    printf("Enter your role (1 for admin, 2 for developer, 3 for researcher): ");
    scanf("%d", &user_role);
    printf("Enter the model status (1 for ready, 2 for testing, 3 for training): ");
    scanf("%d", &model_status);
    printf("Enter value between 1 and 15: ");
    scanf("%d", &value);

    if (value & 1){
        view = true;
    }
    if (value & 2){
        train = true;
    }
    if (value & 4){
        test = true;
    }
    if (value & 8){
        deploy = true;
    }
    model_score = (accuracy+confidence)/2;

    switch(model_status){
        case 1: 
        printf("Status: ready\n");
        switch(user_role){
            case 1: printf("Role: Admin\n"); break;
            case 2: printf("Role: Developer\n"); break;
            case 3: printf("Role: researcher\n"); break;
            default: printf("Invalid role\n");
        }
        break;
        case 2: 
        printf("Status: testing\n");
        switch(user_role){
            case 1: printf("Role: Admin\n"); break;
            case 2: printf("Role: Developer\n"); break;
            case 3: printf("Role: researcher\n"); break;
            default: printf("Invalid role\n");
        }
        break;
        case 3:
        printf("Status: training\n");
        switch(user_role){
            case 1: printf("Role: Admin\n"); break;
            case 2: printf("Role: Developer\n"); break;
            case 3: printf("Role: researcher\n"); break;
            default: printf("Invalid role\n");
        }
        break;
        default: printf("Invalid input\n");
    }

    printf("Model score: %.2f\n", round(model_score)); // round() function in math 
    printf("Memory used by model data: %d bytes\n", (int)(sizeof(accuracy) + sizeof(confidence) + sizeof(data_set)));
    // sizeof calculates the total bytes smtg takes
    printf("View: %s\n", view ? "Yes":"No");
    printf("Train: %s\n", train ? "Yes":"No");
    printf("Test: %s\n", test ? "Yes":"No");
    printf("Deploy: %s\n", deploy ? "Yes":"No");

    if ((accuracy>=80) && (confidence>=75) && (data_set>=1000) && (model_status == 1) && deploy){
        printf("Your model is deployment ready!\n");
    }
    else{
        printf("Model is not ready for deployment\n");
    }
    return 0;
}