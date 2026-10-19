#include <stdio.h> 

int main(){
    char logs[3][60] = {0}; // the question has ambiguity. I'm assuming the questions asks to store
    // each log entry feilds in one row seperated by a space character, but it would require
    // array of more than 30 characters 
    int count = 0;

    
    for (int i = 0; i<3; i++){
    printf("Enter data in cvs format: ");
    scanf(" %19[^,], %19[^,], %19[^\n]", logs[i], logs[i]+20, logs[i]+40);
    // printf("%s, %s, %s\n", logs[i], logs[i]+20, logs[i]+40);
    }


    for (int j = 0; j<3; j++){
        for (int k = 0; k<60; k++){
            if ((logs[j][k] >= 'A') && (logs[j][k] <= 'Z')){
            count += 1;
            }
        }
    }
   
    printf("Total Uppercase characters: %d", count);
    return 0;
}

// another approach 
// char log[3][3][30];

// for (int i = 0; i<3; i++){
//     printf("Enter data in cvs format: ");
//     scanf(" %[^,], %[^,], %[^\n]", logs[i][0], logs[i][1], logs[i][2]);
//     }

//     for (int i = 0; i < 3; i++){
//         for (int j = 0; j < 3; j++){
//             printf("%s ", logs[i][j]);
//         }
//         printf("\n")
//     }
