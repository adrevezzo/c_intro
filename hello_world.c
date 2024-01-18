#include <stdio.h>
#include <cs50.h>

int main(void){
   // printf("Hello, \"World!\"");
   // string answer = get_string("What's your name? ");
   // printf("hello, %s\n", answer);

   int num1 = get_int("Enter first number: ");
   int num2 = get_int("Enter second number: ");

   if (num1 > num2) {
      printf("Number 1 (%i) is greater than Number 2 (%i)", num1, num2);
   } else if (num1 < num2) {
      printf("Number 2 (%i) is greater than Number 1 (%i)", num1, num2);
   } else {
      printf("Number 1 (%i) is equal to Number 2 (%i)", num1, num2);
   }
   
}