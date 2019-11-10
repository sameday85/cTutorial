#include  <stdio.h>
int main(){
   int num1 = 10;
   int num2 = 20;
   //determine which one is bigger and print it out
   if(num1<num2){
       printf("num2 is bigger. Exact values are %d and %d", num1, num2);
   }
   else if (num1>num2){
       printf("num1 is bigger. Exact values are %d and %d", num1, num2);
   }
   else {
       printf("num1 is the same as num2. Exact values are %d and %d", num1, num2);
   }
   return 0;
}
