#include <stdio.h>

int main(){
    int shifts[4][3]; // rows are shifts and cols are workstations
    int new_row = 0;

    for (int i = 0; i<3; i++){
        for (int j = 0; j<3; j++){
            printf("Enter shift %d for workstation %d: ", i+1, j+1);
            scanf("%d", &shifts[i][j]);
        }
    }

    printf("Which row would u like to add to? (1 to 4): ");
    scanf("%d", &new_row);
    new_row = new_row -1;

    for (int i = 3; i>new_row; i--){
        for (int j = 0; j<3; j++){
            shifts[i][j] = shifts[i-1][j];
        }
    }
    for (int j = 0; j<3; j++){
        printf("Enter shift %d for workstation %d", new_row, j+1);
        scanf("%d", &shifts[new_row][j]);
    }

    for (int i = 0; i<4; i++){
        for (int j = 0; j<3; j++){
            printf("%d ", shifts[i][j]);
        }
        printf("\n");
    }
    return 0;
}