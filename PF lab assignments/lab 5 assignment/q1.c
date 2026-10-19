#include <stdio.h>

int main(){
    char student_name[3][50];
    int marks[3][3];
    int total = 0;
    float avg = 0.0;

    for (int i = 0; i<3; i++){
        total = 0; avg =0.0;
        printf("Enter your name: ");
        scanf(" %[^\n]", student_name[i]); // student_name[i] is valid here because u want
        // the column is just the spaces for those specific characters, also no & cos
        // think of 2d array as an array to an array
        for (int j = 0; j<3; j++){
            printf("Enter your marks for subject %d: ", j+1);
            scanf("%d", &marks[i][j]);
            total = total+marks[i][j];
        }
        avg = (float)total/3.0;
        printf("\t\tStudent Report\n");
        printf("Name: %s\n", student_name[i]);
        printf("Total Marks: %d\n", total);
        printf("Marks average: %.2f\n", avg);
    }
    return 0;
}
