#include <stdio.h>
#include <string.h>
#include "Obstacles.h"
#include "PrintBoard.h"

char boardIndex[6][9][100]; //Keeping track of where the pieces are on the board
typedef struct{
    char colour[3];
    int counter_1[2];
    int counter_2[2];
    int counter_3[2];
    int counter_4[2];
} Player;
Player players[6];
int Column = 9; //The amount of Columns on the board

int main(){
    PickingPlayers();
}
