#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>
#include "Obstart.h"
#include "Obstacles.h"
#include "Turns.h"
#include "Sidestep.h"
#include "PickingPlayers.h"
#include "PlacingTokens.h"
#include "InspectorGadget.h"
#include "Dice.h"


/*Declaring global variables*/
char colour[6][1][7] = {"Blue", "Orange", "Red", "Green", "Yellow", "White"};
struct Player players[6];
char boardIndex[6][9][25]; //Keeping track of where the pieces are on the board
int playerCount; //Player Count

int main(){
    PickingPlayers();
    PlacingTokens();
}
