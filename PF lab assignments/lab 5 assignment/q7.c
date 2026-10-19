#include <stdio.h>

int main(){
    float sensor_data[3][4];
    int new_col = 0;

    for (int i = 0; i<3; i++){
        for (int j = 0; j<4; j++){
            printf("Enter value for day %d recording using sensor %d: ", i+1, j+1);
            scanf("%f", &sensor_data[i][j]);
        }
    }

    for (int i = 0; i<3; i++){
        for (int j = 0; j<4; j++){
            printf("%.2f ", sensor_data[i][j]);
        }
        printf("\n");
    }

    printf("Which column has values taken with defective sensor?(1 to 4) ");
    scanf("%d", &new_col);
    new_col = new_col -1;

    for (int i = 0; i<3; i++){
        for (int j =new_col; j<3; j++){
            sensor_data[i][j] = sensor_data[i][j+1];
        }
    }

    for (int i = 0; i<3; i++){
        sensor_data[i][3] = 0.0;
    }

    for (int i = 0; i<3; i++){
        for (int j = 0; j<3; j++){
            printf("%.2f ", sensor_data[i][j]);
        }
        printf("\n");
    }
    return 0;
}