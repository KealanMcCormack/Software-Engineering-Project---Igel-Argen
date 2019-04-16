#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>

#include "Turns.h"
#include "Sidestep.h"
#include "Obstart.h"
#include "Obstacles.h"
#include "PrintBoard.h"
#include "InspectorGadget.h"
//#include "PickingPlayers.h"
//#include "PlacingTokens.h"

typedef struct players{
    char colour;
}

/*Declaring global variables*/
players[6];
char boardIndex[6][9][25] = { ' ' }; //Keeping track of where the pieces are on the board
int playerCount; //Player Count

int main()
{
  boardIndex[1][2][0] = 'K';
  int count=0;
  Obstart();
  PrintBoard();
  InspectorGadget();
  for(count=0;count<5;count++)
  {
    Obstacles();
    PrintBoard();
    Turns('K');
  }
}
