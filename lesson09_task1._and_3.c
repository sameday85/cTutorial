#include <stdio.h>

void compare(int number1, int number2){
    if(number1 > number2 ){
        printf("number 1 is bigger");
    }
    else if(number1 < number2){
        printf("number 2 is bigger");
    }
    else {
        printf("they are the same");
    }

}
int main(){
    int num1, num2;
    printf("Please enter a number:\n");
    scanf("%d", &num1);
    printf("Please enter another number:\n");
    scanf("%d", &num2);
    compare(num1, num2);
}

