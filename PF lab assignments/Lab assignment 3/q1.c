#include <stdio.h>

int main(){
    float maths = 0.0;
    float AI = 0.0;
    float programming = 0.0;
    float attendance = 0.0;
    float average = 0.0;

    printf("Enter your math marks: ");
    scanf("%f", &maths);
    printf("Enter your programming marks: ");
    scanf("%f", &programming);
    printf("Enter your AI marks: ");
    scanf("%f", &AI);
    printf("Enter your attendance percentage: ");
    scanf("%f", &attendance);

    if ((maths>=50) && (programming>=50) && (AI>=50) && (attendance>=75)){
        average = (maths+programming+AI)/3;
        if ((average>=80)){
            printf("Excellent\n");
        }
        else if ((average>=70) && (average<80)){
            printf("Very Good\n");
        }
        else if ((average>=60) && (average<70)){
            printf("Good\n");
        }
        else if ((average>=50) && (average<60)){
            printf("Satisfactory\n");
        }
        else if ((average<50)){
            printf("Poor\n");
        }
    }
    else {
        printf("Student is Not Eligible\n");
    }
    return 0;
}