#include  <stdio.h>


int main()
{
    int day_of_week=0;
    printf("Please enter a number:\n");
    scanf("%d", &day_of_week);
    //this is a switch

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
    }

    return 0;
}
