extern char boardIndex[6][9][25];
int Sidestep(char PlayerColour)
{
  int a=0, temp, count=0, counts, row, column, rowup, rowdown;//Need to do check for player colour and what counter they're moving

  while(count != 2)
  {
    printf("Which counter would you like to move\n Enter the row and the column with a space inbetween\n");
    scanf("%d %d", &row, &column);
    row = row - 1;//Array starts at 0,0 so varibles must be adjusted to this
    column = column - 1;
    rowup = row - 1;
    rowdown = row + 1;
    if(boardIndex[row][column][0] == PlayerColour && boardIndex[row][column][0] != 'X')//Checks that this is a valid move
    {
      count = 2;
      printf("Which row would you like to move to? Type the option number\n");
      if(rowup != -1)
      {
       printf("Option 1  %d\n", (row));//Prints options for movement
      }
      if(rowdown != 6)
      {
       printf("Option 2  %d\n", (rowdown+1));
      }
      scanf("%d", &temp);
      if(temp == 1)
      {
        for(counts=0;counts<20;counts++)
        {
          boardIndex[row][column][counts] = boardIndex[row][column][counts+1];//Shifts boardIndex down to remove token being moved
        }
          if(boardIndex[rowup][column][0]== '\0')
          {
            boardIndex[rowup][column][0] = PlayerColour;//If new square is free the players token replaces it
          }
          else{
            for(counts=24;counts > 0;counts--)//If the square isn't free the tokens in the square are shifted back to make room for the new token on top
            {
              boardIndex[rowup][column][counts] = boardIndex[rowup][column][counts-1];
            }
            if(boardIndex[rowup][column][1] == 'X')//Checks if the sidestep is into an obstacle and reacts accordingly
            {
              boardIndex[rowup][column][1] = PlayerColour;
              boardIndex[rowup][column][0] = 'X';
            }
            else{
            boardIndex[rowup][column][0] = PlayerColour;
          }
          }
        }
    if(temp == 2)
    {
      for(counts=0;counts<20;counts++)
      {
        boardIndex[row][column][counts] = boardIndex[row][column][counts+1];//Shifts boardIndex down to remove token being moved
      }
      if(boardIndex[rowdown][column][0]== '\0')
      {
       boardIndex[rowdown][column][0] = PlayerColour;//If new square is free the players token replaces it
      }
      else{
        for(counts=24;counts>0;counts--)//If the square isn't free the tokens in the square are shifted back to make room for the new token on top
        {
          boardIndex[rowdown][column][counts] = boardIndex[rowdown][column][counts-1];
        }
        if(boardIndex[rowdown][column][1] == 'X')//Checks if the sidestep is into an obstacle and reacts accordingly
        {
          boardIndex[rowdown][column][1] = PlayerColour;
          boardIndex[rowdown][column][0] = 'X';
        }
        else{
        boardIndex[rowdown][column][0] = PlayerColour;
      }
      }
    }
  }
  else{
    printf("I don't believe that to be your token good sir\n");//prints if the token isn't the same colour as the player
    printf("Still looking to switch, type 1 for yes or 2 for no\n");
    scanf("%d", &count);
  }
}
}
