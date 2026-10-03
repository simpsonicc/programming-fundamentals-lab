#include <stdio.h>
#include <stdbool.h>

int main(){
    int number[10];
    int largest = 0;
    int smallest = 0;
    int search = 0;
    int num = 0; 
    int index = 0;
    bool found = false;

    for (int i = 0; i<8; i++){
        printf("Enter number: ");
        scanf("%d", &number[i]);
    }
    largest = number[0];
    smallest = number[0];


    for (int i = 0; i<8; i++){
        printf("%d ", number[i]);
    }
    printf("\n");

    for (int i = 0; i<8; i++){
        if (number[i]>largest){
            largest = number[i];
        }
    }

    for (int i = 0; i<8; i++){
        if (number[i]<smallest){
            smallest = number[i];
        }
    }

    printf("Largest number: %d\nSmallest number: %d\n", largest, smallest);

    printf("Enter the number you want to search: ");
    scanf("%d", &search);

    for (int i = 0; i<8; i++){
        if (number[i] == search){
            printf("found %d at index: %d\n", search, i);
            found = true;
        }
    }
    if (!found){
        printf("%d is not in the array", search);
    }

    printf("What number do u want to insert in the array and at what index: ");
    scanf("%d%d", &num, &index);

    for (int i = 7; i>=index; i--){ // 0 to 7 index exists in the array so far...
        number[i+1] = number[i];
    }
    number[index] = num;

    printf("You want to delete number from what index: ");
    scanf("%d", &index);

    for (int i = index; i<9; i++){
        number[i] = number[i+1];
    }

    for (int i = 0; i<8; i++){
        printf("%d ", number[i]);
    }
    return 0;
}