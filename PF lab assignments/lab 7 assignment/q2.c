#include <stdio.h>
#include <string.h>

int main(){
    char names[10][50] = {"zain", "zahra", "ahsan", "daniyal", "fahad", "ali", "hassan", "zohaib", "bilal", "usman"};
    char temp_name[50];

    for (int i = 0; i<10; i++){ 
        for (int j = 0; j<9-i; j++){ // 9-i cos after each i atleast i elements will be sorted at the very end
             if (strcmp(names[j], names[j+1])>0){
                strcpy(temp_name, names[j]);
                strcpy(names[j], names[j+1]);
                strcpy(names[j+1],temp_name);
            }
        }
    }

    for (int i =0; i<10; i++){
        printf("%s\n", names[i]);
    }
    return 0;
}