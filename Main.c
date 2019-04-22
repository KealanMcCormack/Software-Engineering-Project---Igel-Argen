#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>

#include "Obstart.h"
#include "Obstacles.h"
#include "Turns.h"
#include "Sidestep.h"
//#include "PrintBoard.h"
#include "PickingPlayers.h"
#include "PlacingTokens.h"
#include "InspectorGadget.h"
#include "WinnaWinnaChickenDinna.h"
#include "Dice.h"


/*Declaring global variables*/
char colour[6][1][7] = {"Blue", "Orange", "Red", "Green", "Yellow", "White"};
struct Player players[6];
char boardIndex[6][9][25]; //Keeping track of where the pieces are on the board
int playerCount; //Player Count

int main(void)
{
    int count=0, win=0;
    int ans, i;
    int WinStatus=0;
    int dice;
    Obstart();
    PrintBoard();
    PickingPlayers();
    PlacingTokens();
    for(i=0;i<playerCount;i++)
    {
        PrintBoard();
        dice = Dice();
        printf("It's %s Turn\n", players[i].name);
        printf("Colour %c\n", players[i].ColourShort);
        printf("Dice is %d\n", dice);
        printf("If you want to examine a stack type 1, After this\n");
        printf("If you want to Sidestep press 2\n");
        printf("Type three to skip and start the movement phase\n");
        scanf("%d", &ans);
        if(ans == 1)
        {
         InspectorGadget();
         printf("If you want to Sidestep press 2\n");
         printf("Type three to skip and start the movement phase\n");
         scanf("%d", &ans);
        }
        if(ans == 2)
        {
         Sidestep(players[i].ColourShort);
        }
        Turns(dice);
        Obstacles();
        win = WinnaWinnaChickenDinna(playerCount);
        if(win < 8)
        {
          printf("Congrats to player %s\n", players[win].ColourLong);
          break;
        }
        if(i==playerCount-1){
            i=-1;
        }
    }
}
