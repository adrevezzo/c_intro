#include <cs50.h>
#include <stdio.h>

int add(int a, int b); 

int main(void) {
    int x = get_int("x: ");
    int y = get_int("y: ");

    double z = (double) x / (double) y;

    // printf("%i\n", add(x,y));
    printf("%.10f\n", z);

}

int add(int a, int b){
    return a + b;
}