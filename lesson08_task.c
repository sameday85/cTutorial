#include <stdio.h>

void sign(int number);
int main(){
    sign(0);
    return 0;
}
void sign(int number){
    if(number>0){
        printf("the number is positive\n");
    }
    else if (number<0) {
        printf("the number is negative");

    }
    else{
        printf("the number is zero");
    }
}
