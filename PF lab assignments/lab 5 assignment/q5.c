#include <stdio.h>
#include <ctype.h>

int main(){
    char sentences[3][100];
    int vowel = 0;

    printf("Enter 3 sentences seperated by colon: ");
    for (int i = 0; i<3; i++){
        scanf("%99[^;\n]%*c", sentences[i]); // ; \n means stop at ; OR enter
        // %*C means read one character after it but don't store it, so its discarded
    }
    for (int i = 0; i<3; i++){
        vowel = 0;
        for (int j = 0; sentences[i][j] != '\0'; j++){
            char c = tolower(sentences[i][j]);
            if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'){
            vowel += 1;
            }
        }
        printf("Sentence: %s\n", sentences[i]);
        printf("Vowels in this sentence are: %d\n", vowel);
    }
    return 0;
}