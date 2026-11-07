#include <stdio.h>
#include <string.h>
#include <stdbool.h>

void displayMenu();
void registerMember(char name[], int *studentID, int *memberType);
void displayBooks(int bookIDs[], char bookTitles[][50], int availableCopies[],
int totalBooks);
void borrowBook(int bookIDs[], char bookTitles[][50], int availableCopies[],
int totalBooks, int borrowedBookIDs[], int *borrowedCount, int memberType);
float returnBook(int bookIDs[], int availableCopies[], int totalBooks, int
borrowedBookIDs[], int *borrowedCount, int memberType, float *totalFine);
void displayMemberRecord(char name[], int studentID, int memberType, int
borrowedBookIDs[], int borrowedCount, float totalFine, float fineAfterWaiver);

int main(){
    int choice = 0;
    int studentid = 0;
    int membertype = 0;
    int bookid[5] = {101, 102, 103, 104, 105};
    char booktitles[5][50] = {"C Programming", "Data Structures", "Calculus", "Physics", "Discrete Math"};
    int availablecopies[5] = {3, 2, 1, 4, 2};
    int borrowedbooksid[3] = {0, 0, 0};
    int borrowedcount = 0;
    int totalbooks = 5;
    float totalfine = 0;
    float payablefine= 0;
    char name[50] = "";

    do{
        displayMenu();
        printf("Enter choice: ");
        scanf("%d", &choice);
        switch (choice){
            case 1:
                registerMember(name, &studentid, &membertype);
                break;
            
            case 2:
                displayBooks(bookid, booktitles, availablecopies, totalbooks);
                break;
            
            case 3: 
                borrowBook(bookid, booktitles, availablecopies, totalbooks,
                        borrowedbooksid, &borrowedcount, membertype);
                break;

            case 4: 
                payablefine += returnBook(bookid, availablecopies, totalbooks,
                                        borrowedbooksid, &borrowedcount, membertype, &totalfine);
                break;
            
            case 5:
                displayMemberRecord(name, studentid, membertype, borrowedbooksid,
                                    borrowedcount, totalfine, payablefine);
                break;

            case 6:
                break;

            default:
            printf("Invalid Choice\n");
                break;
        }
    } while (choice != 6);

    return 0;
}

void displayMenu(){
    printf("1. Member Registration\n");
    printf("2. Display available books\n");
    printf("3. Borrow a book\n");
    printf("4. Return a book\n");
    printf("5. Display Member record\n");
    printf("6. Exit\n");
}

void registerMember(char name[], int *studentID, int *memberType){
    printf("Enter your name: ");
    scanf(" %49[^\n]", name);
    printf("Enter your Student ID: ");
    scanf("%d", studentID);
    do{
        printf("Are you a student or Faculty? (type 0 for student and 1 for faculty) ");
        scanf("%d", memberType);
    } while (*memberType != 0 && *memberType != 1); // post codition looping
}

void displayBooks(int bookIDs[], char bookTitles[][50], int availableCopies[],
int totalBooks){
    printf("%-20s %-20s %-5s\n", "ID", "Title", "Copies"); //- left aligns it and 20 means col is 20 characters wide
    printf("--------------------------------------------------\n");
    for (int i = 0; i<totalBooks; i++){
        printf("%-20d %-20s %5d\n", bookIDs[i], bookTitles[i], availableCopies[i]);
    }
}

void borrowBook(int bookIDs[], char bookTitles[][50], int availableCopies[],
int totalBooks, int borrowedBookIDs[], int *borrowedCount, int memberType){
    int id = 0;
    bool valid = false;
    int index = 0;
    int days = 0;
    printf("Enter book ID of the book you want to borrow: ");
    scanf("%d", &id);
    for (int i = 0; i<totalBooks; i++){
        if (bookIDs[i] == id) {
             valid = true; // loops over bookid array to find this id
             index = i;
             break;
        }
    }
    if (!valid){ // incorrect id 
        printf("Incorrect book ID entered\n");
        return; 
    }
    if (*borrowedCount >= 3){ // trying to borrow more than 3 books
        printf("You cannot borrow any more books right now\n");
        return;
    }
    if (availableCopies[index] <= 0){ // no more books available for it 
        printf("No more copies available for this book\n");
        return;
    }
    printf("Enter days you intend to keep the book: ");
    scanf("%d", &days);
    if (memberType == 0){
        if (days<=0 || days >14){
            printf("Invalid days entered, it must be greater than 0 and less than 14\n");
            return; // for a func that returns nothing, this is equivalent to break or exit from the function
        }
    }
     if (memberType == 1){
        if (days<=0 || days >30){
            printf("Invalid days entered, it must be greater than 0 and less than 30\n");
            return; // for a func that returns nothing, this is equivalent to break or exit from the function
        }
    }
    borrowedBookIDs[*borrowedCount] = id;
    *borrowedCount += 1;
    availableCopies[index] = availableCopies[index] - 1;
}

float returnBook(int bookIDs[], int availableCopies[], int totalBooks, int
borrowedBookIDs[], int *borrowedCount, int memberType, float *totalFine){
    int id = 0;
    int days = 0;
    bool valid = false;
    int index = 0;
    int extra = 0;
    int borrow_index = 0;
    char code[8] =" ";
    printf("Enter book ID of the book you want to return: ");
    scanf("%d", &id);
    while (days<= 0){
        printf("How many days did u keep the book? ");
        scanf("%d", &days);
    }
    for (int i = 0; i<*borrowedCount; i++){
        if (borrowedBookIDs[i] == id){
            valid = true;
            borrow_index = i;
            break;
        }
    }
    if (!valid){
        printf("Incorrect ID\n"); // no valid id 
        return 0;
    }
    for (int i = 0; i<totalBooks; i++){
        if (bookIDs[i] == id){ // to get the index of available copies
            index = i;
            break;
        }
    }
    availableCopies[index] += 1;
    float current_fine = 0;
    // *borrowedCount -= 1;

    if (memberType == 0){ // student
        if (days > 14){
            extra = days - 14;
            current_fine = extra*20; // to return current fine 
            *totalFine += current_fine; // the cumulative fine 
            printf("Enter memebership code: ");
            scanf(" %7[^\n]", code);
            if (strcmp(code, "LIB2026") == 0) // strcmp compares the ascii value of the first character
            // and so on and returns their difference so if its 0 that means no diff and strings are same
            {
                current_fine = current_fine *0.50;
            }
        }
    } 
    if (memberType == 1){ // faculty
        if (days > 30){
            extra = days - 30;
            current_fine = extra*10;
            *totalFine += current_fine;
            printf("Enter memebership code: ");
            scanf(" %7[^\n]", code);
            if (strcmp(code, "LIB2026") == 0) // strcmp compares the ascii value of the first character
            // and so on and returns their difference so if its 0 that means no diff and strings are same
            {
                current_fine = current_fine*0.50;
            }
        }
    } 
    // removing borrowed book
    for (int i =borrow_index; i<*borrowedCount-1; i++){
        borrowedBookIDs[i] = borrowedBookIDs[i+1];
    }
    borrowedBookIDs[*borrowedCount-1] = 0;
    *borrowedCount -= 1;

    return current_fine;
}

void displayMemberRecord(char name[], int studentID, int memberType, int
borrowedBookIDs[], int borrowedCount, float totalFine, float fineAfterWaiver){
    printf("---------------Member's Record-------------------\n");
    printf("Name = %s\n", name);
    printf("ID: %d\n", studentID);
    printf("Member Type: %s\n", memberType ? "Faculty": "Student");
    if (borrowedCount>0){
        printf("You have borrowed the following books:\n");
        for (int i = 0; i< borrowedCount; i++){
            printf("%d\n", borrowedBookIDs[i]);
        }
    }
    printf("Total books: %d\n", borrowedCount);
    printf("Total Fine: %.2f\n", totalFine);
    printf("Fine payable: %.2f\n", fineAfterWaiver);
}