#include <stdio.h>
#include <string.h>

int main(){
    int num = 0;
    float total = 0.0;
    float revenue = 0.0;
    int i = 0;
    char season[50] = " ";
    char room_type[50] = " ";
    int nights = 0;

    printf("Enter total guests: ");
    scanf("%d", &num);
    while (i < num){
        total = 0.0;
        strcpy(season, " ");
        strcpy(room_type," ");
        nights = 0;
        printf("Enter season (peak or off): ");
        scanf("%s", season);
        printf("Enter room type (Standard, Deluxe, Suite): ");
        scanf("%s", room_type); // no need for array's address, the first element in array 
        // points towards array location already
        printf("How many nights will you be staying? ");
        scanf("%d", &nights);

        if ((strcmp(season, "Peak") == 0) || (strcmp(season, "peak") == 0)){ //season is peak thats why it evaluates to 0 else 1
            if( (strcmp(room_type, "Deluxe") == 0) || (strcmp(room_type, "deluxe") == 0)){
                total = 8000 * nights;
            }
             else if( (strcmp(room_type, "Standard") == 0) || (strcmp(room_type, "standard") == 0)){
                total = 5000 * nights;
            }
            else  if( (strcmp(room_type, "Suite") == 0) || (strcmp(room_type, "suite") == 0)){
                total = 12000 * nights;
            }
        }

        else if ((strcmp(season, "Off") == 0) || (strcmp(season, "off") == 0)){ //season is peak thats why it evaluates to 0 else 1
            if( (strcmp(room_type, "Deluxe") == 0) || (strcmp(room_type, "deluxe") == 0)){
                total = 5000 * nights;
            }
             else if((strcmp(room_type, "Standard") == 0) || (strcmp(room_type, "standard") == 0)){
                total = 3000 * nights;
            }
            else  if((strcmp(room_type, "Suite") == 0) || (strcmp(room_type, "suite") == 0)){
                total = 8000 * nights;
            }
        }

        if (nights>7){
            total = total *0.85;
        }

        revenue = revenue+total;
        i += 1;

        printf("Total: %.2f\n", total);

    }
    printf("Total revenue: %.2f\n", revenue);
}