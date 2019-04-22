#include <stdio.h>
extern struct Player players[6];
extern char boardIndex[6][9][25];
extern int playerCount;
void PrintBoard(void);
void PlacingTokens(void){
    int i,j,count;
    int RowSelection;
    int bigcount;
    int StackPtr = 3;//Tracks how far into the stack the tokens are being placed
    bigcount = playerCount * 4;
    for(i=0;i<bigcount;i++){
        for(j=0;j<6;j++){
            printf("(%d) | %c |\n", j+1,boardIndex[j][0][StackPtr]);//prints first column of board
        }
        printf("Player %s's Turn\n",  players[i%playerCount].name);
    printf("Which row would you like to place your token in\n");
        scanf("%d", &RowSelection);
        RowSelection = RowSelection - 1;
        if(boardIndex[RowSelection][0][StackPtr] != '\0'){//Checks that row is free and token can be placed in it
            while(boardIndex[RowSelection][0][StackPtr] != '\0'){
                printf("Please choose a valid row\n");
                    scanf("%d", &RowSelection);
                      RowSelection = RowSelection - 1;
            }
        }
        boardIndex[RowSelection][0][StackPtr] = players[i%playerCount].ColourShort;//Puts player colour into boardIndex
        if(((i+1) % 6) == 0 && i > 0)
        {
            StackPtr--;//Decrements how far into the stack a token is placed after every 6 tokens (when the column is full)
        }
    }
  for(i=0;i<6;i++)
  {
    if(boardIndex[i][0][0] == '\0')
    {//If the top of the stack contains whitespace the stack is shifted forward
      for(count=0;count!=4;count++)
      {
        boardIndex[i][0][count] = boardIndex[i][0][count+1];
      }
      i = i - 1;
    }
  }
}
void PrintBoard(void)
{
  int count, counts=1, a=1;
  printf("    1    2    3    4    5    6    7    8    9 \n");//prints column numbers
   for(count = 0;count!=6;count++)
   {
    printf("%d ", a);//prints row numbers
    for(counts = 0;counts!=9;counts++)
    {
     printf("| %c |", boardIndex[count][counts][0]);//prints rows
    }
    printf("\n");//New row
    a++;
  }
}
