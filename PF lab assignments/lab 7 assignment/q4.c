#include <stdio.h>

int main(){
    char name[55]; 
    int acc_num = 0;
    float withdrawal_amount = 0.0;

    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);

    printf("Enter your account number: ");
    scanf("%d", &acc_num);

    printf("How much would u like to withdraw? ");
    scanf("%f", &withdrawal_amount);

    FILE *fptr; // fptr is a pointer to a file in the memory

    fptr = fopen("bank_log.txt", "a"); // open file bank_log.txt if it exists else make one
    // second parameter tells it which mode it is. in this case its append aka edit

    if (fptr == NULL){
        printf("Data could not be saved.\n");
        return 0;
    }
    fprintf(fptr, "%s\n", name); // writing the info inside the file 
    fprintf(fptr,"%d\n", acc_num);
    fprintf(fptr, "%f\n", withdrawal_amount); // specifying type of data u gonna store is neccessary

    fclose(fptr); // close the file

    return 0;
}