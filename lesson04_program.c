/*Think about it. If we didn’t have a constant and need to change the same value, it would be time consuming. But a constant saves us time.*/

#include <stdio.h>
#define PI 3.14

int main(){
    int radius = 0;
    printf("enter radius of a circle:");
    scanf("%d", &radius);
    printf("The circumference of the circle is: %f.\n The area of the circle is: %f\n", radius*2*PI, radius*radius*PI);
    return 0;
}
