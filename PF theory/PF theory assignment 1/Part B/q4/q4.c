#include <stdio.h>

int main(){
    int quantity = 0;
    float subtotal = 0.0;
    float price = 0.0;
    float discount = 0;
    float discounted_amount = 0.0;
    float final_bill = 0.0;
    float tax = 0;
 
    printf("Enter quanity: ");
    scanf("%d", &quantity);
    printf("Enter price per quanity: ");
    scanf("%f", &price);
    printf("Enter discount percentage: ");
    scanf("%f", &discount);
    printf("Enter tax percentage: ");
    scanf("%f", &tax);
   
     if ((price<0) || (quantity<0) || (discount<0) || (discount>100) || (tax<=0)){
        printf("Invalid values entered\n");
     }
     else{
        subtotal = price * quantity;
        discount = (subtotal*discount)/100;
        discounted_amount = subtotal - discount;
        tax = discounted_amount*tax/100;
        final_bill = discounted_amount + tax;


        printf("-------------BILL-------------\n");
        printf("Quantity: %d\n", quantity);
        printf("Price per item: %.2f\n", price);
        printf("Subtotal: %.2f\n", subtotal);
        printf("Discount: %.2f\n", discount);
        printf("Tax: %.2f\n", tax);
        printf("Final bill: %.2f\n", final_bill);
     }
}