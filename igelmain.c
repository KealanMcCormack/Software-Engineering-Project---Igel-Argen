#include <stdio.h>
#include <string.h>
#include "Obstacles.h"
#include "PrintBoard.h"

char boardIndex[6][9][100]; //Keeping track of where the pieces are on the board
char playerIndex[1][6][4]; //Keeping track of player colours and turns
int Column = 9; //The amount of Columns on the board
int players; //the number of players;


int main(){
    PickingPlayers();
}
