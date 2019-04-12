extern char boardIndex[6][9][25];
int Sidestep(char PlayerColour)
{
  int a=0, temp, count=0, counts, row, column;//Need to do chack for player colour and what counter they're moving
  char b[1];
  while(count != 2)
  {
    printf("Which counter would you like to move\n Enter the row and the column with a space inbetween\n");
    scanf("%d %d", &row, &column);
    if(boardIndex[row][column][0] == PlayerColour)
    {
      printf("Which row would you like to move to? Type the option number\n");
      printf("Option 1  %d\n", (row-1));
      printf("Option 2  %d\n", (row+1));
      scanf("%d", temp);
      if(temp == 1)
      {
        for(counts=0;counts<20;counts++)
        {
          boardIndex[row][column][counts] = boardIndex[row][column][counts+1];
        }
          if(boardIndex[row-1][column][0]== '\0')
          {
            boardIndex[row-1][column][0] = PlayerColour;
          }
          else{
            b[0] = PlayerColour;
            for(counts=1;counts<20;counts++)
            {
              b[counts] = boardIndex[row-1][column][counts-1];
              boardIndex[row-1][column][counts-1] = b[counts-1];
            }
          }
        }
    if(temp == 2)
    {
      for(counts=0;counts<20;counts++)
      {
        boardIndex[row][column][counts] = boardIndex[row][column][counts+1];
      }
      if(boardIndex[row+1][column][0]== '\0')
      {
       boardIndex[row+1][column][0] = PlayerColour;
      }
      else{
        b[0] = PlayerColour;
        for(counts=1;counts<20;counts++)
        {
          b[counts] = boardIndex[row+1][column][counts-1];
          boardIndex[row+1][column][counts-1] = b[counts-1];
        }
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
