#include <stdio.h>

int main(){
    int current_floor = 0;
    int new_floor = 0;
    int i = 0;
    int num = 0;

    printf("Enter total requests: ");
    scanf("%d", &num);

    while (i<num){

        printf("Enter the floor you want to go to: ");
    scanf("%d", &new_floor);
        if (new_floor == current_floor){
            printf("Door Opening!\n");
        }
        else if (new_floor > current_floor){
            current_floor = new_floor; 
            printf("Moving Up!\n");
        }
        else if (new_floor < current_floor){
            current_floor = new_floor; 
            printf("Moving Down!\n");
        }

        i += 1;
    }
}