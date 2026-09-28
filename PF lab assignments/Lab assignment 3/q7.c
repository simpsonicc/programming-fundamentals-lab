#include <stdio.h>

int main(){
    float confidence = 0.0;
    float required_confidence = 0.0;

    printf("Enter the confidence score: ");
    scanf("%f", &confidence);
    printf("Enter the required confidence score: ");
    scanf("%f", &required_confidence);

    if (confidence >= 90){
        printf("Very High Confidence\n");
    }
    else if (confidence >= 75){
        printf("High Confidence\n");
    }
    else{
        printf("%s\n", (confidence>=50) ? "Moderate Confidence": "Low Confidence");
    }

    if ((confidence>=required_confidence) && (confidence>=50)){
        printf("Accepted\n");
    }
    else{
        printf("Rejected\n");
    }

    return 0;
}