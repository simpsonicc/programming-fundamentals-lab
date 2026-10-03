#include <stdio.h>

int main(){
    char word[50];
    int count = 0;
    char temp = ' ';
    char reversed[50];
    int j = 0;
    int is_palindrome = 1;
    int vowel = 0;
    int consonant = 0;

    printf("Enter the word: ");
    scanf("%49[^\n]", word);

    while (word[count] != '\0'){
        count += 1;
    }
    printf("%s has %d letters\n", word, count);


    while (j<(count/2)){
        if (word[j] != word[count-1-j]){ // count -1 cos array starts from 0
            is_palindrome = 0;
        }
        j += 1;
    }
    printf(is_palindrome ? "Palindrome\n": "Not palindrome\n");

   for (int i = 0; i<count; i++){
    reversed[i] = word[i];
    if (reversed[i] == 'a' || reversed[i] == 'e' || reversed[i] == 'i' || reversed[i] == 'o' || reversed[i] == 'u'
    || reversed[i] == 'A' || reversed[i] == 'E' || reversed[i] == 'I' || reversed[i] == 'O' || reversed[i] == 'U'){
        vowel += 1; 
    }
    else {
        consonant += 1;
    }
   }
   reversed[count] = '\0';

    for (int i = 0; i<(count/2); i++){
        temp = reversed[i];
        reversed[i] = reversed[count-1-i];
        reversed[count-1-i] = temp;

    }
    printf("Reversed: %s\n", reversed);
    printf("Consonants: %d\tVowel: %d\n", consonant, vowel);
    return 0;

}
