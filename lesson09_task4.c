#include  <stdio.h>

//comented out because not nessecary, if later days like saturady will need them
int main()
{
    int day_of_week=0;
    /*
    switch (day_of_week)

    {
        case 0 :
        printf("sunday\n");
        break;
        case 1 :
        printf("monday\n");
        break;
        case 2 :
        printf("tuesday\n");
        break;
        case 3 :
        printf("wednesday\n");
        break;
        case 4 :
        printf("thursday\n");
        break;
        case 5 :
        printf("friday\n");
        break;
        case 6 :
        printf("saturday\n");
        break;
    }    */

    if (day_of_week==0) {
        printf("sunday\n");
        printf("Weekenday\n");
    }
    else if (day_of_week==1)
        printf("monday\n");
    else if(day_of_week==2)
        printf("tuesday\n");
    else
        printf("wednesday\n");//(day_of_week==3)
    /*else if
    printf("thursday\n");
    else if
    printf("friday\n");
    break;
    case 6 :
    printf("saturday\n");
    break;*/



    return 0;
}
