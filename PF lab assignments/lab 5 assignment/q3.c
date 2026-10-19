#include <stdio.h>

int main(){
    char Secret_messages[3][100];
    int spaces = 0;
    int word_count = 0;

    for (int i = 0; i < 3; i++){
        spaces = 0;
        word_count = 0;
        printf("Enter the message (It should be uppercase characters only and can include spaces) ");
        scanf(" %[A-Z ]", Secret_messages[i]);

        for (int j = 0; Secret_messages[i][j] != '\0'; j++){ 
            if (Secret_messages[i][j] == ' '){
                spaces += 1;
            }
            else if ((Secret_messages[i][j] != ' ') && ((Secret_messages[i][j+1] == ' ') || 
            (Secret_messages[i][j+1] == '\0'))){
            word_count += 1; // it checks that if its a word, is it ending now? if not it moves on
            }
        }
        printf("%s\n", Secret_messages[i]);
        printf("Word count: %d\n", word_count);
        printf("Total spaces: %d\n", spaces);
}
}