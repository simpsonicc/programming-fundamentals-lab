#include <stdio.h>
#include <math.h>

int main(){
    int operation = 0;
    float num = -1;
    float exponent = 0;
    float base = 0;
    
    printf("Enter the operation you want to perform: (1.Square Root, 2.Power, 3.Absolute value, 4.Floor, 5.Ceiling)");
    scanf("%d", &operation);

    switch (operation){
        case 1:
        while (num<0){
            printf("Enter a number: ");
            scanf("%f", &num);
        }
        printf("Square root: %.2f\n", sqrt(num));
        break;
        case 2:
        printf("Enter base and exponent: ");
        scanf("%f%f", &base, &exponent);
        printf("Power: %.2f\n", pow(base, exponent)); // pow(base, exponent) for power
        break;
        case 3:
        printf("Enter a number: ");
        scanf("%f", &num);
        printf("Absolute value: %.2f\n", fabs(num)); // fabs(num) for absolute value
        break;
        case 4:
        printf("Enter a number: ");
        scanf("%f", &num);
        printf("Floor: %.2f\n", floor(num)); // floor(num) for floor which rounds down to nearest int 
        break;
        case 5: 
        printf("Enter a number: ");
        scanf("%f", &num);
        printf("Ceiling: %.2f\n", ceil(num)); // ceil(num) for ceiling which rounds up to nearest int 
        break;

        default:
        printf("Invalid operation\n");
    }
    return 0;
}