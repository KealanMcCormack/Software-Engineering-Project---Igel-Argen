extern char boardIndex[6][9][25];
extern struct Player players[6];
int Winner(int playerCount)
{
  int count=0, counts=0, counter=0, i=0;
while(i < playerCount)//Loops through all players
{
  for(count=0;count < 6;count++)
  {
    for(counts=0;counts<12;counts++)
    {
      if(boardIndex[count][8][counts] != '\0')//Checks if there is a players token in the final column
      {
      if(players[i].ColourShort == boardIndex[count][8][counts])
      {
        counter++;//increases counter if the colour matches token in row 9
      }
    }
    }
  }
  if(counter == 3)//If 3 tokens are owned by the same player
  {
    return i;//return player struct number
    break;
  }
  counter = 0;//resets counter to check for each player
  i++;
 }
  return 10;
}
