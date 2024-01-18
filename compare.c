#include <cs50.h>
#include <stdio.h>

int main(void){
    int num1 = get_int("Enter number 1: ");
    int num2 = get_int("Enter number 2: ");

   if (num1 > num2) {
      printf("Number 1 (%i) is greater than Number 2 (%i)\n", num1, num2);
   } else if (num1 < num2) {
      printf("Number 2 (%i) is greater than Number 1 (%i)\n", num1, num2);
   } else {
      printf("Number 1 (%i) is equal to Number 2 (%i)\n", num1, num2);
   }


}