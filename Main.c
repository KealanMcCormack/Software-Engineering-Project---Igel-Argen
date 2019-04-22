#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>

#include "Obstart.h" //Includes all libraries
#include "Obstacles.h"
#include "Turns.h"
#include "Sidestep.h"
#include "PickingPlayers.h"
#include "PlacingTokens.h"
#include "InspectorGadget.h"
#include "Winner.h"
#include "Dice.h"


/*Declaring global variables*/
char colour[6][1][7] = {"Blue", "Orange", "Red", "Green", "Yellow", "White"};
struct Player players[6];
char boardIndex[6][9][25]; //Keeping track of where the pieces are on the board
int playerCount; //Player Count

int main(void)
{
    int count=0;
    int ans, i;
    int WinStatus=10;
    int dice;
    Obstart();//Initialises obstacles
    PrintBoard();//prints board
    PickingPlayers();//Allows players to pick colours
    PlacingTokens();//DOes intial placement of tokens on the board
    for(i=0;i<playerCount;i++)
    {
        PrintBoard();
        dice = Dice();//Random number generator between 1 and 6
        printf("It's %s Turn\n", players[i].name);
        printf("Colour %c\n", players[i].ColourShort);
        printf("Dice is %d\n", dice);
        printf("If you want to examine a stack type 1\n");//Instructions
        printf("If you want to Sidestep press 2\n");
        printf("Type three to skip and start the movement phase\n");
        scanf("%d", &ans);
        if(ans == 1)
        {
         InspectorGadget();//Allows inspection of spacific square of the board
         printf("If you want to Sidestep press 2\n");
         printf("Type three to skip and start the movement phase\n");
         scanf("%d", &ans);
        }
        if(ans == 2)
        {
         Sidestep(players[i].ColourShort);//Allows movement of own token sideways
        }
        Turns(dice);
        Obstacles();//Checks if obstacles should be removed
        WinStatus = Winner(playerCount);//checks win conditions
        if(WinStatus < 7)
        {
          printf("Congrats to player %s\n", players[WinStatus].name);
          printf("Well played, hard fought win\n");
          break;
        }
        if(i==playerCount-1){
            i=-1;
        }
    }
}
