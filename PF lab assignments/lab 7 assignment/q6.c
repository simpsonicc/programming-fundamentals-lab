#include <stdio.h>
#include <string.h>

int main(){
    char username[50];
    char password[50];
    char stored_username[50];
    char stored_password[50];

    printf("Enter username: ");
    fgets(username, sizeof(username), stdin); // it counts \n as the character too (enter key)
    printf("Enter password: ");
    fgets(password, sizeof(password), stdin);

    username[strlen(username) - 1] = '\0'; //to store the terminating character in the array so the 
    //it doesnt compare newline in the fgets too that has been read already  
    password[strlen(password) - 1] = '\0'; 

    FILE *fptr = fopen("credentials.txt", "r");

    if (fptr == NULL){
        printf("Error: File Not Found!\n");
        return 0;
    }

    fscanf(fptr, "%49s %49s", stored_username, stored_password);

    if (strcmp(stored_username, username) == 0 && strcmp(stored_password, password) == 0){
        printf("Access granted!\n");
    }
    else printf("Access Denied!\n");

    fclose(fptr);
    return 0;
}