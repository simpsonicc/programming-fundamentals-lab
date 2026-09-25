#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int main(){
    char type; // variables declaration and initialisation
    float current_charge = 0.0; // u can't do this intialisation in one line cos it will only assign it to current time
    float required_charge = 0.0;
    float duration = 0.0;
    float discount = 0.0;
    float current_time = 0.0;
    bool member = false;
    bool disable = false;
    bool available = false;
    bool parking = false;
    bool charge = false;
    char priority[50] = " ";
    char status[50] = " ";
    float cprice = 0.0;
    float pprice= 0.0;
    float total_price = 0.0;
    int answer; // no standard date data type in c

    printf("1. Enter your current battery percentage: ");
    scanf("%f", &current_charge);
    printf("2. How much charge does your car require right now: ");
    scanf("%f", &required_charge);
    printf("3. Expected duration for charging (in hours): ");
    scanf("%f", &duration);
    printf("4. Current time (24hr clock, i.e. 13.07): ");
    scanf("%f", &current_time);
    printf("6. Do you have any disability? (enter 0 for no and 1 for yes)");
    scanf("%d", &answer);
    disable = (answer != 0); // stores true if answer is not equals to 0 
    printf("7. Is parking available right now? (enter 0 for no and 1 for yes)");
    scanf("%d", &answer);
    available = (answer != 0); // stores false if answer equals to 0
    printf("Do u have an EV or hybrid vehicle (E for ev and H for hybrid): ");
    scanf(" %c", &type); // gap cus it doesn't read the null value(/n)
    printf("Are you a member? (1 for yes and 0 for no)");
    scanf("%d", &answer);
    member = (answer != 0);
    
    if (!(available)){
        switch(type){
            case 'E':
            case 'e':
                printf("No charging slot available.\n");
                break;
            case 'H':
            case 'h':
                printf("Charging unavailable-parking only.\n ");
                printf("Do u want to use the parking? (enter 0 for no and 1 for yes)");
                scanf("%d", &answer);
                parking = (answer != 0);
                break;
            default:
                printf("Invalid type.\n");
            }
        }
    else if ((available) && ((type == 'e' || type == 'E') || ((type == 'h' || type == 'H')
     && (current_charge<40.0)))){
        
        if (required_charge <= current_charge){
            printf("No charging required. \n");
            charge = false;
            }
        else {
            required_charge = required_charge - current_charge;
            if (current_charge <= 15.0 && required_charge >= 80.0){
                strcpy(priority, "Emergency charging priority");
            }
            else if ((disable) || ((member) && current_charge <= 30)){
                strcpy(priority, "Priority charging");
                }
            else {
                strcpy(priority, "Normal charging"); // strings cannot be assigned directly in c
            }
            }
            charge = true;
    } 
    
    if ((charge) && (current_time < 17.00 || current_time > 22.00)){
        strcpy(status, "off"); // strcpy function in string.h, variable name first and the value u want to store in it
        if ((member) && strcmp(priority, "Emergency charging priority") != 0){
            // strcmp checks if they are equal, returns 0 if they are otherwise 1
            // 0 means false and 1 means true
            discount = 35 *0.20;
            cprice = 35*0.80;
            cprice = cprice * required_charge;
            discount = discount * required_charge;
        }
        else {
            cprice = 35;
            cprice = cprice * required_charge;
            discount = 0;
        }
    }
    else if ((charge) && (current_time >= 17.00 && current_time <= 22.00)){
        strcpy(status, "peak");
        if ((member) && strcmp(priority, "Emergency charging priority") != 0){
            discount = 50*0.10;
            cprice = 50*0.90;
            cprice = cprice * required_charge;
            discount = discount * required_charge;
        }
        else {
            cprice = 50;
            discount = 0;
            cprice = cprice * required_charge;
        }
    }
    if ((charge) || (parking)){
        if (duration <= 2){
            if (member){
                pprice = 200*0.80;
                discount = discount + (200*0.20);
            }
            else if (disable){
                pprice = 0;
                discount = 200;
            }
            else{
                pprice = 200;
                discount = 0;
            }
        }
        else if (duration>2 && duration<=5){
            if (member){
                pprice = 400*0.80;
                discount = discount + (400*0.20);
            }
            else if (disable){
                pprice = 0;
                discount = 400;
            }
            else{
                pprice = 400;
                discount = 0;
            }
        }
        else if (duration > 5){
            if (member){
                pprice = 700*0.80;
                discount = discount + (700*0.20);
            }
            else if (disable){
                pprice = 0;
                discount = 700;
            }
            else{
                pprice = 700;
                discount = 0;
            }
        }
        total_price = cprice + pprice;
    
    if ((charge)){
        if (duration > 8){
            printf("Long stay warning: Please relocate your vehicle after charging \n");
        }
        else {
            printf("Standard parking duration\n");
        }
    }

    if (parking){
        printf("Parking price: %.2f\n", total_price);
    }
    else{
        printf(
        "Vehicle type: %c\n, current charge: %.2f\n charging required: %.2f\n "
        "priority: %s\n status: %s\n parking price: %.2f\n charging price: %.2f\n "
        "discount: %.2f\n total price: %.2f\n",
        type, current_charge, required_charge, priority, status, pprice, cprice, discount,
        total_price);
    }
}
    return 0;
}