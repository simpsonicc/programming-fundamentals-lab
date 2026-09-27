#include <stdio.h>

int main(){
    float total, missing, duplicate;
    float percentage_missing, percentage_duplicate;
    printf("Enter total number of records, missing record and duplicate records: ");
    scanf("%f%f%f",&total, &missing, &duplicate);
    percentage_missing = (missing/total)*100;
    percentage_duplicate = (duplicate/total)*100;
    if (total <= 0){
        printf("Invalid Dataset.\n");
    }
    else if (percentage_missing > 30){
        printf("Poor Quality Dataset.\n");
    }
    else if (percentage_missing <= 30 && percentage_duplicate>20){
        printf("Dataset Requires Cleaning.\n");
    }
    else{
        printf("Dataset Ready for Training.\n");
    }
    // printf("%.2f %.2f %.2f", percentage_missing, percentage_duplicate);
    return 0;
}