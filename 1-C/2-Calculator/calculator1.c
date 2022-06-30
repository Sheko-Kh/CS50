#include <cs50.h>
#include <stdio.h>

int main (void)
{
    //Prompt user for x
    long x = get_long("X: ");

    //Prompt user for y
    long y = get_long("y: ");

    //performe addition
    printf("%li\n", x + y);
}