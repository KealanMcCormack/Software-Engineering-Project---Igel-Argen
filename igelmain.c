#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>
#include "Obstart.h"
#include "Obstacles.h"
#include "Turns.h"
#include "Sidestep.h"
#include "PrintBoard.h"
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
    int count=0;i=0;
    int WinStatus=0;
    int Dice;
    Obstart();
    PrintBoard();
    PickingPlayers();
    PlacingTokens();
    for(i=0;<playerCount;i++){
        PrintBoard();
        Dice = Dice();
        Turns(Dice);
        if(i==playerCount-1){
            i=0;
        }
    }
}
