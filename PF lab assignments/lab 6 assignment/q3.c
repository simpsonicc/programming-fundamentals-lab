#include <stdio.h>

int main(){
    int image[3][3]; // 2d array of 3*3
    int (*ptr)[3] = image; // points to the one row of three integers (col), [3] tells it
    // how big the row is, so when we do ptr+1 it goes to next row not col
    // int *ptr[3] would mean ptr is an array of 3 int pointers
    // int (*ptr)[3] would mean ptr is an pointer to an array
    int val = 0;

    printf("%d\n", sizeof(image));
    for (int i = 0; i<3; i++){
        for (int j = 0; j<3; j++){
            printf("Enter pixel value: ");
            scanf("%d", &val);
            *(*(ptr+i) + j) = 2*val; // *((*ptr+i)+j) is same as image[i][j]
            // *(ptr+i) gives the row adress not the value (don't confuse it with *)
        }
    }
    for (int i =0; i<3; i++){
        for (int j = 0; j<3; j++){
            printf("| %2d ",  *(*(ptr+i) + j));
        }
        printf("|\n");
    }

    return 0;
}