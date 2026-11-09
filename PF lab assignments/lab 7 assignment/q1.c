#include <stdio.h>
#include <string.h>

int main(){
    char review[500];

    printf("Review: ");
    fgets(review, sizeof(review), stdin); // stores the input, stdin means input 

    int len = strlen(review);
    char result[600];
    printf("Length of characters: %d\n", len);
    char *result1 = strstr(review, "bad"); // strstr returns pointer to the first bad found in review
    // if none, it returns null

    char *result2 = strstr(review, "good");
    if (result2 != NULL){
        printf("Word good found in the review\n");
    }
    else{
        printf("Word good not found in the review\n");
    }
    if (result1 != NULL){
        printf("Word bad found in the review\n");
        int before_len = result1 - review; // gets the length of characters before it hits bad
        strncpy(result, review, before_len); // copies everything bofore bad into a new string 
        result[before_len] = '\0';
        strcat(result, "not good"); // concatinate not good with previously extracted sting
        strcat(result, result1+3); // gets everything remaining but skips bad
        fputs(result, stdout); // prints smtg, stdout means output
    }
    else printf("Word bad not found in the review\n");

    return 0;
}