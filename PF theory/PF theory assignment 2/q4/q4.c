#include <stdio.h>

int getValidDays();
float calculateDailySales(int dayNumber);
int findHighestSalesDay(float dailySales[], int numberOfDays);
void displayBarChart(float dailySales[], int numberOfDays);

int main(){
    int total_days = getValidDays();
    float daily_sales[total_days]; // to store total of sales of each day
    float total = 0.0;
    int index = 0;

    for (int i = 0; i<total_days; i++){
        printf("Day %d: \n", i+1);
        daily_sales[i] = calculateDailySales(i);
        total += daily_sales[i];
    }

    printf("=============== FESTIVAL SUMMARY ===============\n");
    printf("Total festival sales: Rs. %.2f\n", total);
    index = findHighestSalesDay(daily_sales, total_days);
    printf("Day with highest sales: Day %d\n", index);
    printf("Highest daily sales: Rs.%.2f\n", daily_sales[index-1]);

    printf("============ DAILY SALES BAR CHART ============\n");
    displayBarChart(daily_sales, total_days);

    return 0;

}
int getValidDays(){
    int days = 0;
    while ((days <= 0) || (days>7)){ // valid days
        printf("How long will be the festival? (days 1 to 7): ");
        scanf("%d", &days);
    }
    return days;
}

float calculateDailySales(int dayNumber){
    int orders = 0;
    printf("How many orders did u get today? ");
    scanf("%d", &orders);
    float sale[orders]; // to keep track for each sale
    float total = 0.0;
    float amount = 0.0;
    float max = 0.0;
    float avg = 0.0;
    for (int i = 0; i<orders; i++){
        amount = 0.0;
        while (amount<=0.0){
            printf("How much did u earn for order %d? ", i+1);
            scanf("%f", &amount);
        }
        sale[i] = amount;
    }

    max = sale[0]; 
    for (int i = 0; i<orders; i++){
        total += sale[i];
        if (sale[i]>max){
            max = sale[i];
        }
    }
    avg = total/(float)orders;

    printf("Total sales: Rs. %.2f\n", total);
    printf("Average sale: Rs. %.2f\n", avg);
    printf("Highest order: Rs. %.2f\n", max);

    return total;
}

int findHighestSalesDay(float dailySales[], int numberOfDays){
    int highest_sale = 0;
    float max = dailySales[0];
    for (int i =0; i<numberOfDays; i++){
        if (dailySales[i]>max){
            max = dailySales[i];
            highest_sale = i;
        }
    }
    return highest_sale+1;
}

void displayBarChart(float dailySales[], int numberOfDays){
    int asterisk = 0;
    for (int i = 0; i<numberOfDays; i++){
        asterisk = dailySales[i]/100;
        printf(" day %d: ", i+1);
        for (int j = 0; j<asterisk; j++){
            printf("*");
        }
        printf(" (Rs. %.2f)\n", dailySales[i]);
    }
    printf("\n");
}
