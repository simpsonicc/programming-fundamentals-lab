#include <stdio.h>

int main(){
    int num = 0;
    int middle = 0;
 
    
    printf("Enter an odd number: ");
    scanf("%d", &num);

    if ((num % 2) != 1){
        printf("This is an even number\n");
        return 0;
    }
    middle = (num/2); //index starts from 0, so thsi will actually result as the middle value

    printf("%d\n", middle);   
    for (int i = 0; i<middle; i++){
        for (int j = 0; j<num; j++){
            if ((middle+i) == j){
                printf("*");
            }
            else if (middle-i == j){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
    for (int i = middle; i<num; i++){
        int distance = (num-1) - i;
        for (int j = 0; j<num; j++){
            if ((middle+distance) == j){
                printf("*");
            }
            else if (middle-distance == j){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}