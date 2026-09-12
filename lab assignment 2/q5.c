#include <stdio.h>

int main(){
    int role, security, temp;
    bool status;
    printf("Enter your role (1 for Admin, 2 for Researcher and 3 for student): ");
    scanf("%d", &role);
    printf("Enter your account status (active or inactive) and security level: ");
    scanf("%d%d", &temp, &security);
    status = temp;

    if (!status){
        printf("Access denied. \n");
    }
    else if(role == 1 && security>=3){
        printf("Access granted for Admin.\n");
    }
     else if(role == 2 && security>=2){
        printf("Access granted for researcher.\n");
    }
     else if(role == 3 && security>=1){
        printf("Access granted for student.\n");
    }
    else{
        printf("Access denied.\n");
    }
    return 0;
}