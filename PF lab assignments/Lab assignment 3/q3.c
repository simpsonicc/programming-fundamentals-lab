#include <stdio.h>

int main(){
    int choice = 0;
    int sub_choice = 0;

    printf("Category:\n1.Animal\n2.Vehicle\n3.Food\n4.Human\n");
    printf("Enter choice: ");
    scanf("%d", &choice);

    switch(choice){
        case 1:
        printf("Sub-Category:\n1.Cat\n2.Dog\n3.Bird\n");
        printf("Enter sub choice: ");
        scanf("%d", &sub_choice);
        switch(sub_choice){
            case 1: 
            printf("You have chosen cat\n");
            break;
            case 2:
            printf("You have chosen dog\n");
            break;
            case 3:
            printf("You have chosen bird\n");
            break;
            default: 
                printf("Invalid choice\n");   
        }
        break;
        case 2:
        printf("Sub-Category:\n1.Car\n2.Bus\n3.Bike\n");
        printf("Enter sub choice: ");
        scanf("%d", &sub_choice);
        switch(sub_choice){
            case 1: 
            printf("You have chosen car\n");
            break;
            case 2:
            printf("You have chosen bus\n");
            break;
            case 3:
            printf("You have chosen bike\n");
            break;
            default: 
                printf("Invalid choice\n");   
        }
        break;
        case 3:
        printf("Sub-Category:\n1.Pizza\n2.Burger\n3.Biryani\n");
        printf("Enter sub choice: ");
        scanf("%d", &sub_choice);
        switch(sub_choice){
            case 1: 
            printf("You have chosen pizza\n");
            break;
            case 2:
            printf("You have chosen burger\n");
            break;
            case 3:
            printf("You have chosen biryani\n");
            break;
            default: 
                printf("Invalid choice\n");   
        }
        break;
        case 4: 
        printf("Sub-Category:\n1.Male\n2.Female\n3.Child\n");
        printf("Enter sub choice: ");
        scanf("%d", &sub_choice);
        switch(sub_choice){
            case 1: 
            printf("You have chosen male\n");
            break;
            case 2:
            printf("You have chosen female\n");
            break;
            case 3:
            printf("You have chosen child\n");
            break;
            default: 
                printf("Invalid choice\n");   
        }
        break;
        default:
        printf("Invalid choice\n");
    }
    return 0;
}