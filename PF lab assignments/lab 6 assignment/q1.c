#include <stdio.h>
#include <stdbool.h>

float calculate_discount(char customer_type, float price);
float calculateFinalBill(char customer_type, float price);

int main(){
    char type; 
    float price = 0.0;

    printf("Enter total price: ");
    scanf("%f", &price);
    printf("Enter Customer type (P for platinum, G for gold, S for standard): ");
    scanf(" %c", &type);

    float amount = calculateFinalBill(type, price);

    if (amount>=0){
        printf("Payable amount: %.3f\n",amount);
        return 0;
    }
    return 1;
}

float calculate_discount(char customer_type, float price){
    if (price < 0){
        printf("Invalid price\n");
        return 1;
    }
    float new_price = price;
    bool high_total = false;
    if (price>10000){
        high_total= true;
    }
    switch (customer_type)
    {
    case 'P':
    case 'p':
        if (high_total) new_price = price*0.78;
        else new_price = price*0.80;
        break;
    case 'G':
    case 'g':
        if (high_total) new_price = price*0.88;
        else new_price = price*0.90;
        break;
    case 's':
    case 'S':
        if (high_total) new_price = price*0.93;
        else new_price = price*0.95;
        break;
    default:
        printf("Invalid type\n");
        return -1;
    }
    return price - new_price;
}

float calculateFinalBill(char customer_type, float price){
    float discount_amount = calculate_discount(customer_type, price);
    if (discount_amount<0){
        return -1;
    }

    float sale_tax = (price-discount_amount)*0.15;
    int shipping_charges = 0;

    if ((price-discount_amount)<=5000){
        shipping_charges = 300;
    }

    return (price-discount_amount)+shipping_charges+sale_tax;
}