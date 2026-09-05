#include <stdio.h>
int main()
{
   char product[70];
   float price;
   int quantity;
   printf("Enter your product: ");
   scanf(" %69[^\n]", product);
   printf("Enter the quantity of your product: ");
   scanf("%d", &quantity);
   printf("Enter the price of your product: ");
   scanf("%f", &price);
   printf("Product Name: %s\nQuantity: %d\nPrice: %.2f\n", product, quantity, price);
   return 0;

}