#include  <stdio.h>
int main(){
    int day_of_week=2;
    switch(day_of_week){
    case 1:
    case 7:
        printf("Weekend!");
        break;
    default :
        printf("Weekday!");
    }
    return 0;
}
