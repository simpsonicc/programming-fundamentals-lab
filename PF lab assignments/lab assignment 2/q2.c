#include <stdio.h>

int main(){
    int score;
    printf("Input confidence score between 0 and 100: ");
    scanf("%d", &score);

    if (score>100 || score<0){
        printf("Invalid score\n");
    }
    else if (score>=0 && score<50){
        printf("low confidence.\n");
    }
    else if (score>=50 && score<80){
        printf("Moderate Confidence.\n");
    }
    else if (score>=80 && score<=100){
        printf("High Confidence.\n");
    }
    return 0;
}