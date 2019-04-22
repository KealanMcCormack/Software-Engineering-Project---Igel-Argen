#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int Dice(void)// Outputs number between 1 and 6
{
    int out;
    srand(time(NULL));
    out = (rand() % 6) + 1;//random number generator
    return out;//outputs number
}
