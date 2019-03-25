#include <stdio.h>
#include <string.h>

extern char playerIndex[1][6][4]

void PickingPlayers(void){
    int i,j;
    printf("Please enter the amount of players\n"); //Getting amount of players
        scanf("%d", &players);
        fflush(stdout);
    for(i=0;i<players;i++){
        printf("Please pick your colour:\n"); //Getting player colours
        printf("Blue = blu\n");
        printf("Black = bla\n");
        printf("Red = red\n");
        printf("Green = gre\n");
        printf("Yellow = yel\n");
        printf("White = whi\n");
        printf("player %d please pick a colour using its 3 letter code\n", i+1);
            scanf("%s", &playerIndex[0][i][0]);
        for(j=i-1;j>=0;j--){ //Checking for duplicates in the player colours
            if(strcmp(playerIndex[0][i], playerIndex[0][j])==0){
                printf("This colour has already been used, pick again\n");
                playerIndex[0][i][0] = '\0';
                i--;
            }
        }
    }
    
}