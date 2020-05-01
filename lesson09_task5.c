#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>
//your code might be different. As long the structure is the same, good
int main( ) {
    char str[100];
    int secret, guess;
    //random generator. If you don't know, dont use it. use a assigned variable
    srand(time(0));
    secret = rand() % 100;

    printf( "Make a guess: ");
    //safe scanf, won't overflow
    fgets(str, sizeof(str), stdin);
    guess = atoi(str);
    while (guess != secret) {
        if (guess > secret)
            printf("Too big\n");
        else if (guess < secret)
            printf("Too small\n");
        printf( "Make a guess: ");
        fgets(str, sizeof(str), stdin);
        //check if equals
        guess = atoi(str);
    }
    if (guess == secret)
        printf("Congratuations. You won! The secret number is %d\n", secret);

    return 0;
}
