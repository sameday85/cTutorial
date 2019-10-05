#include  <stdio.h>

int main(){
    int num1 = 10;
    int num2 = 5;
    num2+=0;

    int sum=num1+ num2;
    int diff=num1-num2;
    int product=num1*num2;
    int quotient = num1/num2;

    printf("Two numbers: %d and %d\n", num1, num2);
    printf("The sum is: %d\n", sum);
    printf("The diff is: %d\n", diff);
    printf("The product is: %d\n", product);
    printf("The quotient is: %d\n", quotient);

    return 0;
}
