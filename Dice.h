#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int Dice(void){
    int out;
    srand(time(NULL));
    out = (rand() % 6) + 1;
    return out;
}
