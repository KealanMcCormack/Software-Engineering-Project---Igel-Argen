#include <stdio.h>
#include <string.h>

struct Player{
    char colour;
    char name[20];
};
extern int playerCount;
extern struct Player players[6];

void PickingPlayers(void){
    int i,j;
    char temp;
    printf("Please enter the amount of players\n");
        scanf("%d", &playerCount);
        fflush(stdout);
    for(i=0;i<playerCount;i++){
        printf("Please enter your name\n");
            scanf("%s", &players[i].name);
        printf("Please pick your colour:\n"); //Getting player colours
        printf("Blue = b\n");
        printf("Orange = o\n");
        printf("Red = r\n");
        printf("Green = g\n");
        printf("Yellow = y\n");
        printf("White = w\n");
        printf("Please select a colour using its 1 letter code\n");
        printf("Please dont pick a colour that's already been picked\n");
            scanf("%c", &temp);
        for(j=0;j<playerCount;j++){
           if(players[j].colour == temp){
               printf("Please pick a different colour\n");
                    scanf("%d", &temp);
                break;
           }
       }
    players[i].colour = temp;
}