extern char boardIndex[6][9][25];
void Turns(int dice)
{
  int i=0, temp, a=0, counter=0, count, counts;
  char hold;
  printf("\nTime to Move\n");
  dice = dice - 1; //To work with the array at 0,0 dice is actually 0-5
    printf("  1    2    3    4    5    6    7    8    9 \n");//prints column numbers
  for(count=0;count<9;count++)
  {
   printf("| %c |", boardIndex[dice][count][0]);//Prints row the move is occuring on
   if(count < 8)
   {
   if(boardIndex[dice][count][0] != '\0' && boardIndex[dice][count][0] != 'X')//Checks if row has tokens with valid moves
   {
     counter++;
   }
  }
  }

  if(counter > 0)
  {
  printf("\nDice = %d\n ", dice+1);

  while(a<1)
  {
     printf("Which counter would you like to move? Type in the column number\n");
     scanf("%d", &temp);
     temp = temp - 1;

     if(boardIndex[dice][temp][0] != '\0' && boardIndex[dice][temp][0] != 'X')//Checks if move is valid
     {
      hold = boardIndex[dice][temp][0];//holds counter colour being moved

      for(counts=0;counts<20;counts++)
      {
       boardIndex[dice][temp][counts] = boardIndex[dice][temp][counts+1];//Moves stack down to replace token being moved
       a++;
      }

      for(counts=24;counts > 0;counts--)//Moves stack up where token is moving to
      {
        boardIndex[dice][temp+1][counts] = boardIndex[dice][temp + 1][counts-1];
      }

      if(boardIndex[dice][temp+1][1] == 'X')//Stops obstacle being overwritten
      {
        boardIndex[dice][temp+1][0] = 'X';
        boardIndex[dice][temp+1][1] = hold;
      }
      else{
        boardIndex[dice][temp+1][0] = hold;
      }

     }
     if(a==0)
     {
       printf("Would you mind picking a valid place\n");
     }
    }
  }
  else{
       printf("Sorry, there are no counters in this row that can be moved\n");//If there are no counters with valid movement prints statement
      }
}
