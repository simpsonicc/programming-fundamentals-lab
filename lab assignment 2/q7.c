#include <stdio.h>

int main(){
    float data, price, total, discount, newprice;
    printf("How much data was used in GB and what is the price of data per GB? ");
    scanf("%f%f", &data, &price);
    total = (data*price);
    if (data<50){
        discount = 0.0;
        newprice = total;
    }
    else if (data>=50 && data<100){
        discount = total*0.05;
        newprice = total*0.95;
    }
     else if (data>=100 && data<200){
        discount = total*0.10;
        newprice = total*0.90;
    }
     else if (data>=200){
        discount = total*0.15;
        newprice = total*0.85;
    }
    printf("Price without discount: %.1f\tDiscount: %.1f\tFinal price: %.1f", total, discount, newprice);
    return 0;
}