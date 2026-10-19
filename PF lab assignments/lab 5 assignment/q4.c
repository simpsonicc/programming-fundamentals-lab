#include <stdio.h>
#include <string.h>

int main(){
    char word_grid[3][100];
    int length = 0;
    int new_length = 0;
    char word[30];
    char longest_word[30];
    int start = 0;
    int end = 0;

    for (int i = 0; i < 3; i++){
        printf("Enter three words seperated by space: ");
        scanf(" %[^\n]", word_grid[i]);
    }


    for (int i =0; i<3; i++){
        for (int j = 0; word_grid[i][j] != '\0'; j++){
            int l = j;
            new_length = 0;
            while (word_grid[i][l] != ' ' && word_grid[i][l] != '\0'){
                start_index = l;
                word[new_length] = word_grid[i][l];
                new_length += 1;
                l += 1;
            }
            word[new_length] = '\0';
            if (new_length > length){
                start = j;
                end = j+ (new_length-1);
                length = new_length;
                strcpy(longest_word, word);
            }
    }
    }

    printf("Word with longest length is: %s with starting index: %d and ending index: %d", longest_word, start, end);
    return 0;
}
