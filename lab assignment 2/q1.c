#include <stdio.h> 
int main(){
    int num1, num2, num3, max, min;
    printf("Enter 3 numbers: \n");
    scanf("%d%d%d", &num1, &num2, &num3);
    if (num1 == num2 == num3)
    {
        printf("all there are equal.\n");
    }
    else if (num1 == num2 && num1>num3)
    {
        printf("%d %d are equal and greatest\n", num1, num2);
    }
    else if (num2 == num3 && num2>num1){
        printf("%d %d are equal and greatest\n", num2, num3);
    }
    else if (num1 == num3 && num1 > num2){
                printf("%d %d are equal and greatest\n", num1, num3);
    }

    else if (num1>num2 && num1>num3)
    {
        printf("%d is the greatest. \n", num1);
    }
    else if (num2>num1 && num2>num3)
    {
        printf("%d is the greatest. \n", num2);
    }    
    else if(num3>num1 && num3>num2)
    {
        printf("%d is the greatest.\n",num3);
    }
    return 0;
    
}