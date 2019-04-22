extern char boardIndex[6][9][25];
int Sidestep(char PlayerColour)
{
  int a=0, temp, count=0, counts, row, column, rowup, rowdown;//Need to do check for player colour and what counter they're moving

  while(count != 2)
  {
    printf("Which counter would you like to move\n Enter the row and the column with a space inbetween\n");
    scanf("%d %d", &row, &column);
    row = row - 1;
    column = column - 1;
    rowup = row - 1;
    rowdown = row + 1;
    if(boardIndex[row][column][0] == PlayerColour && boardIndex[row][column][0] != 'X')
    {
      count = 2;
      printf("Which row would you like to move to? Type the option number\n");
      if(row-1 != -1)
      {
       printf("Option 1  %d\n", (rowup+1));
      }
      if(row-1 != 6)
      {
       printf("Option 2  %d\n", (rowdown+1));
      }
      scanf("%d", &temp);
      if(temp == 1)
      {
        for(counts=0;counts<20;counts++)
        {
          boardIndex[row][column][counts] = boardIndex[row][column][counts+1];
        }
          if(boardIndex[rowup][column][0]== '\0')
          {
            boardIndex[rowup][column][0] = PlayerColour;
          }
          else{
            for(counts=24;counts > -1;counts--)
            {
              boardIndex[rowup][column][counts] = boardIndex[rowup][column][counts-1];
            }
            boardIndex[rowup][column][0] = PlayerColour;
          }
        }
    if(temp == 2)
    {
      for(counts=0;counts<20;counts++)
      {
        boardIndex[row][column][counts] = boardIndex[row][column][counts+1];
      }
      if(boardIndex[rowdown][column][0]== '\0')
      {
       boardIndex[rowdown][column][0] = PlayerColour;
      }
      else{
        for(counts=24;counts>-1;counts--)
        {
          boardIndex[rowdown][column][counts] = boardIndex[rowdown][column][counts-1];
        }
        boardIndex[rowup][column][0] = PlayerColour;
      }
    }
  }
  else{
    printf("I don't believe that to be your token good sir\n");
    printf("Still looking to switch, type 1 for yes or 2 for no\n");
    scanf("%d", &count);
  }
}
}
