#include <stdio.h>

int main(){
    FILE *fptr = fopen("marks.txt", "r");

    if (fptr == NULL){
        printf("Error: File Not Found!\n");
        return 0;
    }

    int roll_no = 0; // to store the data from file
    char name[50];
    float marks; 

    printf("%-10s %-20s %-10s\n", "Roll No", "Name", "Marks"); // tabula format and - left aligns it
    printf("-----------------------------------------\n");
    while (fscanf(fptr, "%d %49s %f\n", &roll_no, name, &marks) != EOF){//fscanf reads data stream
        // based on white spaces to seperate them. It also relies on the data type specified
        // fscanf returns no of values successfully read, if its -1 (aka eof) it means file has ended
        printf("%-10d %-20s %-10.2f\n", roll_no, name, marks);
    }
    fclose(fptr);
    return 0;
}