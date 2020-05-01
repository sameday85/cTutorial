#include  <stdio.h>

//comented out because not nessecary, if later days like saturday will need them
int main()
{
    int day_of_week=0;
    printf("Please enter a number:\n");
    scanf("%d", &day_of_week);

    if (day_of_week==0)
        printf("sunday\n");
    else if (day_of_week==1)
        printf("monday\n");
    else if(day_of_week==2)
        printf("tuesday\n");
    else if (day_of_week==3)
        printf("wednesday\n");
    else if(day_of_week==4)
        printf("thursday\n");
    else if(day_of_week==5)
        printf("friday\n");
    else if(day_of_week==6)
        printf("saturday\n");

    return 0;
}
