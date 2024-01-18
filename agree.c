#include <stdio.h>
#include <cs50.h>
#include <ctype.h>

int main(void) {
    
    int running = 1;

    while (running == true){
        char agree = get_char("Do you agree? ");

        if (tolower(agree) == 'y') {
            printf("Agreed.\n");
            running--;
        } else if (tolower(agree) == 'n') {
            printf("Do not Agree.\n");
            running--;
        } else {
            printf("Please enter Y or N\n");
        }
    }   
}