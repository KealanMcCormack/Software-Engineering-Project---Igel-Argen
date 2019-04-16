#include <stdio.h>
#include "PrintBoard.h"
extern struct Player players[6];
extern int playerCount;
extern char boardIndex[6][9][25];
extern char colour[6][1][7];
void PlacingTokens(void){
    int i,j,n,m,a;
    int ColumnFull[6];
    int RowSelection;
    for(i=0;i<4;i++){ //Round/Token number
        for(j=0;j<playerCount;j++){ //player Number
            printf("%s Player place down token number %d\n", colour[players[j].ColourLong][0][0],i);
            printf("What row would you like to place your token in?\n");
            for(n=0;n<6;n++){ //Checking what board spaces are free
                        if(boardIndex[n][0][0]!='\0'){
                            ColumnFull[m]=n;
                            m++;
                            for(a=m-1;a>=0;a--){
                                if(ColumnFull[a]==ColumnFull[m]){
                                    ColumnFull[m]='\0';
                                    m--;
                                }
                            }
                        }
                    }
            PrintBoard();
                scanf("%d", &RowSelection);
            for(a=0;a<6;a++){
                if(ColumnFull[a]==RowSelection && m!=6){ //If m = 6 then it means that the entire first row is full
                    printf("This square is full please pick another\n");
                        scanf("%d", &RowSelection);
                }
                if(ColumnFull[a]==RowSelection && m==6){
                    printf("Put your token on another token\n");
                        scanf("%d", &RowSelection);
                        boardIndex[RowSelection][0][0]=boardIndex[RowSelection][0][1];
                        boardIndex[RowSelection][0][0]=players[j].ColourShort;
                }
            }
            if(m!=6){
                boardIndex[RowSelection][0][0]=players[j].ColourShort;
            }
        }
    }
}