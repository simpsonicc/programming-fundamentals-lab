#include <stdio.h>
#include <stdbool.h>

int main(){
    int row = 0;
    int col = 0;
    int k = 0;
    int total = 0;

    
    printf("Enter the no of rows and seats per row: ");
    scanf("%d %d", &row, &col);
    printf("\n");

    char seating[row][col]; // initialisation in c for variable length array isnt allowed
    int row_counter[row]; // to keep track of free seats in each row 

    for (int i = 0; i<row; i++){
        row_counter[i] = 0;
    }

    for (int i=0; i<row; i++){
        for (int j = 0; j<col; j++){
            printf("Is seat %d in row %d occupied: (Enter 1 for yes and 0 for no)", j, i);
            scanf(" %c", &seating[i][j]);
        }
    }

    // for (int i = 0; i<row; i++){
    //     for (int j = 0; j<col; j++){
    //         printf("| % c ", seating[i][j]);
    //     }
    //     printf("|\n");
    // }

    printf("  ");
    for (int i = 0; i<col; i++){
    printf("%4d", i);} // 4d means 4 digit wide space
    printf("\n");

    
    for (int i = 0; i<row; i++){
        printf("R%d ", i);
        for (int j =0; j<col; j++){
            if (seating[i][j] == '0'){
                seating[i][j] = '_'; // empty
                row_counter[i] += 1; total += 1; // add it to the array of rows that tracks 
            //free seats 
            }
            else{
                seating[i][j] = 'X'; // booked
            }
            printf("| %c ", seating[i][j]);
        }
        
        printf("|\n");
    }
    for (int i = 0; i<row; i++){
        printf("Seats available in row %d: %d\n", i, row_counter[i]);
    }
    printf("Total available seats: %d\n", total);

    printf("How many seats would u like to book? ");
    scanf("%d", &k);

    if ((k<=0) || (k>col)){
        printf("Invalid input\n");
        return 0;
    } 

    int middle_row = row/2;
    int available = 0;
    bool seat_allocated = false; // to know wheather to reprint in the end or not
    int end = 0;
    int j = 0;


    for (int i = 0; i<row; i++){
         j = middle_row -i; // one row above it 
        if (j>=0 && !seat_allocated){ // !allocated so u know seat isnt found yet
            available = 0;
            for (int l = 0; l<col; l++){
                if (seating[j][l] == '_'){ // check for empty
                    available += 1;
                    end = l; // for looping in the end to change at indexes from _ to X
                    if (available == k){ // means consecutive found
                        row_counter[j] = row_counter[j]-k; // adjust that rows free seats
                        printf("Found your seat at row %d from seat %d to %d! \n", j, end-k+1, end);
                        seat_allocated = true;
                        for (int m = (end-k+1); m<=end; m++){ // +1 with end-k cos end is the
                            // last seat and -k gets u to the last filled seat but need one after it
                            seating[j][m] = 'X';}
                        break;
                    }
                }
                else{
                    available = 0;
                }
            }
        }
        j = i + middle_row; // one row below it 
        

        if (i != 0 && j>=0 && j<row && !seat_allocated){
            available = 0;
            for (int l = 0; l<col; l++){
                if (seating[j][l] == '_'){
                    available += 1;
                    end = l;
                    if (available == k){
                        row_counter[j] = row_counter[j]-k;
                        printf("Found your seat at row %d from seat %d to %d!\n", j, end-k+1, end);
                        seat_allocated = true;
                        for (int m = (end-k+1); m<=end; m++){
                            seating[j][m] = 'X';
                        }
                        break;
                    } 
                }
                else{
                    available = 0;
                }
            }
        }
    }

    if (seat_allocated){
        total = total-k; // adjust total free seats accordingly
        printf("  ");
        for (int i = 0; i<col; i++){
            printf("%4d", i);} // 4d means 4 digit wide space
        printf("\n");
        for (int i = 0; i<row; i++){
            printf("R%d ", i);
        for (int j = 0; j<col; j++){
            printf("| %c ", seating[i][j]);
        }
        printf("|\n");
    }
    for (int i = 0; i<row; i++){
        printf("Seats available in row %d: %d\n", i, row_counter[i]);
    }
    printf("Total available seats: %d\n", total);
    }
    else{
        printf("No consecutive seats available, Sorry!\n");
    }
    
    return 0;
}