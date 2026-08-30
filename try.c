#include <stdio.h>
#include <cs50.h>
int main (){
int n = get_int ("please enter the number: ");


    int x = n / 25;
    n = n % 25;

    int y = n / 15;
    n = n % 15;

    int z = n / 10;
    n = n % 10;

    int w = n / 5;

    printf("no. of 25 = %i\n", x);
    printf("no. of 15 = %i\n", y);
    printf("no. of 10 = %i\n", z);
    printf("no. of 5 = %i\n", w);
}


