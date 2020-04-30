#include <stdio.h>

int compare(int a, int b);
int main(){
    int a = 10;
    int b = 20;
    //a must not equal b
    if(compare(a, b) == a){
        printf("a is bigger");
    }
    else{
        printf("b is bigger");
    }
    return 0;
}
int compare(int a, int b){
    if(a>b){
    return a;
    }
    else{
        return b;
    }
}
