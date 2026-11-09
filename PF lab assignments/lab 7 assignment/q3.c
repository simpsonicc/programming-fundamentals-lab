#include <stdio.h>
#include <string.h>

int main(){
    char email[60];
    char domain[30];

    printf("Enter email: ");
    fgets(email, sizeof(email), stdin);

    char *result = strchr(email, '@');

    if (result == NULL){
        printf("Invalid Email Format\n");
    }
    else {
        strcpy(domain, result+1);

        printf("%s\n", domain);
    }
    return 0;
}