#include <stdio.h>
#include <string.h>

 typedef struct{ //Player Struct
    char colour[3];
    int counter_1[2];
    int counter_2[2];
    int counter_3[2];
    int counter_4[2];
}Player;
extern Player players[6];
extern int playerCount;

void PickingPlayers(void){
    int i,j;
    printf("Please enter the amount of players\n");
        scanf("%d", &playerCount);
        fflush(stdout);
    for(i=0;i<playerCount;i++){
        printf("Please pick your colour:\n"); //Getting player colours
        printf("Blue = blu\n");
        printf("Black = bla\n");
        printf("Red = red\n");
        printf("Green = gre\n");
        printf("Yellow = yel\n");
        printf("White = whi\n");
        printf("Please select a colour using its 3 letter code\n");
        printf("Please dont pick a colour that's already been picked\n");
        scanf("%s", &players[i].colour);
        // for(j=i-1;j>=0;j--){
        //     if(strcmp(players[i].colour, players[j].colour)==0){
        //         printf("This Colour has already been picked\n");
        //         players[j].colour = '\0';
        //         i--;
        //     }
        // }
    }
}