#include <stdio.h>
extern struct Player players[6];
extern char boardIndex[6][9][25];
extern int playerCount;
void PrintBoard(void);
void PlacingTokens(void){
    int i,j;
    int RowSelection;
    int bigcount;
    int StackPtr = 4;
    bigcount = playerCount * 4;
    for(i=0;i<bigcount;i++){
        for(j=0;j<6;j++){
            printf("(%d) %c\n", j+1,boardIndex[j][0][0]);
            printf("--\n");
        }
        printf("Player %s's Turn\n",  players[i%playerCount].name);
    printf("Which row would you like to place your token in\n");
        scanf("%d", &RowSelection);
        if(boardIndex[RowSelection][0][StackPtr] == '\0'){
            while(boardIndex[RowSelection][0][StackPtr] != '\0'){
                printf("Please choose a valid row\n");
                    scanf("%d", &RowSelection);
            }

        }
        boardIndex[RowSelection][0][StackPtr] = players[bigcount%4].ColourShort;
        if(bigcount % 6 == 0 && i != 0)
        {
            StackPtr--;
        }
    }
}