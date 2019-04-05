#include <stdio.h>
#include <string.h>

typedef struct{
    enum colour PlayerColour;
    char name[20];
}Player;
extern int playerCount;

void PickingPlayers(void){
    int i,j;
    printf("Please enter the amount of players\n");
        scanf("%d", &playerCount);
        fflush(stdout);
    for(i=0;i<playerCount;i++){
        printf("Please pick your colour:\n"); //Getting player colours
        printf("Blue = b\n");
        printf("Orange = o\n");
        printf("Red = r\n");
        printf("Green = g\n");
        printf("Yellow = y\n");
        printf("White = w\n");
        printf("Please select a colour using its 1 letter code\n");
        printf("Please dont pick a colour that's already been picked\n");
            scanf("%c", &players[i].colour);
        // for(j=i-1;j>=0;j--){
        //     if(strcmp(players[i].colour, players[j].colour)==0){
        //         printf("This Colour has already been picked\n");
        //         players[j].colour = '\0';
        //         i--;
        //     }
        // }
    }
}