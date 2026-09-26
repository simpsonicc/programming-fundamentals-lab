#include <stdio.h>
int main(){
    int num = 0; 
    float marks_1 = 0.0;
    float marks_2 = 0.0;
    float marks_3 = 0.0;
    float marks_4 = 0.0;
    float marks_5 = 0.0;
    int i = 0;
    float average = 0.0;

printf("Enter total students: ");
scanf("%d", &num);

while (i < num){
    marks_1 = 0.0;
    marks_2 = 0.0;
    marks_3 = 0.0;
    marks_4 = 0.0;
    marks_5 = 0.0;
    printf("Enter marks for subject 1: ");
    scanf("%f", &marks_1);
    printf("Enter marks for subject 2: ");
    scanf("%f", &marks_2);
    printf("Enter marks for subject 3: ");
    scanf("%f", &marks_3);
    printf("Enter marks for subject 4: ");
    scanf("%f", &marks_4);
    printf("Enter marks for subject 5: ");
    scanf("%f", &marks_5);

    if ((marks_1<33) || (marks_2<33) || (marks_3<33) || (marks_4<33) || (marks_5<33)){
        printf("Fail-Subject deficiency\n");
    }
    else{
         average = ((marks_1+marks_2+marks_3+marks_4+marks_5)/5);

         if (average>= 80){
            printf("Distinction\n");
         }
         else if ((average>= 60) && (average<80)){
            printf("Pass\n");
         }
         else if (average< 60){
            printf("Fail\n");
         }
    }

    i +=1;
}
}