

/*This program will tell you if a number is even or odd*/
//September 4 2019

#include <stdio.h>

int main()
{
    int num;

    printf("Please enter a number:\n");
    scanf("%d", &num);

    if (num % 2 == 0) {
            printf("It is an even number\n");
    }
    else {
            printf("It is an odd number\n");
    }
    return 0;
}
