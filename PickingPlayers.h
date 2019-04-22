#include <stdio.h>
#include <string.h>

struct Player{
    char ColourShort;
    int ColourLong;
    char name[20];
};
extern int playerCount;
extern struct Player players[6];

void PickingPlayers(void){
    int i,j;
    char temp;
    int temp2;
    printf("Please enter the amount of players (2-6)\n");
        scanf(" %d", &playerCount);
        fflush(stdout);
    for(i=0;i<playerCount;i++){
        fflush(stdout);
        printf("Please enter your name\n");
            scanf(" %s", &players[i].name);
        printf("Please pick your colour:\n"); //Getting player colours
        printf("Blue = b(0)\n");
        printf("Orange = o(1)\n");
        printf("Red = r(2)\n");
        printf("Green = g(3)\n");
        printf("Yellow = y(4)\n");
        printf("White = w(5)\n");
        printf("Please select a colour using its letter code and number code with a comma between e.g. w,5\n");
            scanf(" %c, %d", &temp,&temp2);
        for(j=0;j<playerCount;j++){
           if(players[j].ColourShort == temp){
               printf("Please pick a different colour [letter,number]\n");
                    scanf(" %c, %d", &temp,&temp2);
                break;
           }
       }
    players[i].ColourLong = temp2;
    players[i].ColourShort = temp;
    }
  }
