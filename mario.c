#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <cs50.h>

const char * question_mark(int n);
void blocks();

int main(void) {
    const int question_marks = get_int("How many q's? ");
    blocks();
    printf("%s", question_mark(question_marks));

}

const char * question_mark(int n) {
       
    char question[] ="?";
    char *total = malloc(n);

    for (int i=0; i < n; i++) {
        strcat(total, question);
    }

    return total;
}

void blocks() {
    int invalid = true;
    int rows = 0;
    int cols = 0;
    
    while (invalid) {
        rows += get_int("How many rows? ");
        cols += get_int("How many columns? ");

        if (rows && cols > 0) {
            invalid = false;
        } else {
            printf("Please pick positive integer for rows & cols.\n\n");
        }

    }

    for (int i=0; i < rows; i ++){
        for (int j=0; j < cols; j++){
            printf("#");
        }
        printf("\n");
    }
}

