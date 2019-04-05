#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>
//#include "Obstacles.h"
//#include "PrintBoard.h"
#include "PickingPlayers.h"
#include "PlacingTokens.h"

enum colour {
    blue, orange, red, green, yellow, white
}colour;

/*Declaring global variables*/
struct Player players[6];
char boardIndex[6][9][25]; //Keeping track of where the pieces are on the board
int playerCount; //Player Count

int main(){
}
