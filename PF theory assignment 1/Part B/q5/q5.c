#include <stdio.h> 
#include <stdbool.h>

int main(){
    int capacity_a = 0;
    int capacity_b = 0;
    int capacity_c = 0;
    int vehicle = 0;
    int accepted = 0;
    int rejected = 0;
    int bike = 0;
    int van = 0;
    int car = 0;
    int remaining_capacity_a = 0;
    int remaining_capacity_b = 0;
    int remaining_capacity_c = 0;
    char category = ' ';
    char type = ' ';
    bool permit = false;
    bool emergency = false;  
    int answer; // to help store boolean values
    int val;
    int i = 0;

    printf("Enter the number of vehicles you will be processing: ");
    scanf("%d", &val);
    while (i<val){
        type = ' ';
        category = ' ';
        while ((type != 'b' && type != 'B' && type != 'c' && type != 'C' && type != 'v' 
        && type != 'V' ) && (category != 'F' && category != 'f' && category != 's' && 
        category != 'S' && category != 'G' && category != 'g')){
            printf("Enter type(B for bike, C for car and v for van): ");
            scanf(" %c", &type);
            printf("Enter category(F for faculty, S for students and G for visitors): ");
            scanf(" %c", &category);
            printf("Do you have a valid permit(0 for no and 1 for yes): ");
            scanf("%d", &answer);
            permit = (answer != 0);
            printf("Do you have an emergency(0 for no and 1 for yes): ");
            scanf("%d", &answer);
            emergency = (answer != 0);
            }
    
            vehicle += 1;
            if ((permit) || (emergency)){
                switch(category){
                    case 'f':
                    case 'F':
                    switch(type){
                        case 'b':
                        case 'B':
                        if (capacity_a < 20){
                            accepted += 1;
                            bike += 1;
                            capacity_a += 1;
                            printf("Park in Zone A\n");
                        }
                        else {
                            rejected += 1;
                            printf("Space full \n");
                            
                        }
                        break;
                        case 'c':
                        case 'C':
                        if (capacity_a < 20){
                            accepted += 1;
                            car += 1;
                            capacity_a += 1;
                            printf("Park in Zone A\n");
                        }
                        else {
                            rejected += 1;
                            printf("Space full \n");
                        }
                        break;
                        case 'v':
                        case 'V':
                        if (capacity_a < 19){
                            accepted += 1;
                            van += 1;
                            capacity_a += 2;
                            printf("Park in Zone A\n");
                        }
                        else {
                            rejected += 1;
                            printf("Space full \n");
                        }
                        break;
                        default:
                        printf("\n");
                    }
                    break;
                    case 's':
                    case 'S':
                    switch (type){

                        case 'b':
                        case 'B':
                        if (capacity_b < 40){
                            accepted += 1;
                            bike += 1;
                            capacity_b += 1;
                            printf("Park in Zone B\n");
                        }
                        else {
                            rejected += 1;
                            printf("Space full \n");
                        }
                        break;
                        case 'c':
                        case 'C':
                        if (capacity_b < 40){
                            accepted += 1;
                            car += 1;
                            capacity_b += 1;
                            printf("Park in Zone B\n");
                        }
                        else {
                            rejected += 1;
                            printf("Space full \n");
                        }
                        break;
                        case 'v':
                        case 'V':
                        if (capacity_c < 14){
                            accepted += 1;
                            van += 1;
                            capacity_c += 2;
                            printf("Park in Zone C\n");
                        }
                        else {
                            rejected += 1;
                            printf("Space full \n");
                        }
                        break;
                        default:
                        printf("\n");
                    }
                    break;
                    case 'G':
                    case 'g':
                    switch(type){
                        case 'b':
                        case 'B':
                        if (capacity_c < 15){
                            accepted += 1;
                            bike += 1;
                            capacity_c += 1;
                            printf("Park in Zone C\n");
                        }
                        else {
                            rejected += 1;
                            printf("Space full \n");
                        }
                        break;
                        case 'c':
                        case 'C':
                        if (capacity_c < 15){
                            accepted += 1;
                            car += 1;
                            capacity_c += 1;
                            printf("Park in Zone C\n");
                        }
                        else {
                            rejected += 1;
                            printf("Space full \n");
                        }
                        break;
                        case 'v':
                        case 'V':
                        if (capacity_c < 14){
                            accepted += 1;
                            van += 1;
                            capacity_c += 2;
                            printf("Park in Zone C\n");
                        }
                        else {
                            rejected += 1;
                            printf("Space full \n");
                            break;
                        }
                        default:
                        printf("\n");
                    }
                    break;
                default:
                    printf("\n");
                }
            }

            else{
                printf("You don't have a valid permit\n");
                return 0;
            }

            remaining_capacity_a = 20 - capacity_a;
            remaining_capacity_b = 40 - capacity_b;
            remaining_capacity_c = 15 - capacity_c;

            printf("Total vehicles are: %d\nAccepted: %d\nRejected: %d\nBikes: %d\nCars: %d\nVans: %d\n",
                vehicle, accepted, rejected, bike, car, van);

            if ((remaining_capacity_a == remaining_capacity_b) && (remaining_capacity_a ==
                remaining_capacity_c) && capacity_a == 0){
                    printf("Campus parking is full\n");
                }
            else {
                printf("Capacity for zone A: %d\nCapacity for zone B: %d\nCapacity for zone C: %d\n"
                    , remaining_capacity_a, remaining_capacity_b, remaining_capacity_c);

                if ((capacity_a>capacity_b) && (capacity_a>capacity_c)){
                    printf("Zone A has the highest occupancy\n");
                }
                else if ((capacity_b > capacity_a) && (capacity_b > capacity_c)){
                    printf("Zone B has the highest occupancy\n");
                }
                else{
                    printf("Zone C has the highest occupancy\n");
                }
            }
            i +=1;
            }
    
}
