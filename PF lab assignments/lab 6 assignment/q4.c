#include <stdio.h>

int multiply(int *a, int *b);
int add(int *a, int *b);
int Findmax(int *a, int *b);
int compute(int *a, int *b, int (*func)(int *, int *));

int main(){
    int num1 =0;
    int num2=0;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    
    int (* addptr)(int *, int *) = add;
    int (* multiplyptr)(int *, int *) = multiply;
    int (* maxptr)(int *, int *) = Findmax;
    printf("Sum: %d\n",compute(&num1, &num2, addptr));
    printf("Product: %d\n", compute(&num1, &num2, multiplyptr));
    printf("%d is the largest\n", compute(&num1, &num2, maxptr));

    return 0;
}

int multiply(int *a, int *b){
    return *a * *b;
}
int add(int *a, int *b){
    return *a + *b;
}
int Findmax(int *a, int *b){
    if (*a>*b) return *a;
    return *b;
}
int compute(int *a, int *b, int (*func)(int *, int *)){ // function pointer
    return func(a, b); // a b cos you need to give the function th address
}