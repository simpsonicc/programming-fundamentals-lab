#include <stdio.h>

int main(){
    int present = 0;
    int absent = 0;
    int value = 0;

    for (int i = 0; i<15; i++){
        printf("Enter 1 for present and 0 for absent: ");
        scanf("%d", &value);

        if (value){
            present += 1;
        }
    }
    absent = 15 - present;

    printf("%d students are present and %d students are absent\n", present, absent);
}