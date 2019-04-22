extern char boardIndex[6][9][25];
extern struct Player players[6];
int WinnaWinnaChickenDinna(int playerCount)
{
  int count=0, counts=0, counter=0, i=0;
while(i < playerCount)
{
  for(count=0;count < 6;count++)
  {
    for(counts=0;counts<12;counts++)
    {
      if(players[i].ColourShort == boardIndex[count][9][counts])
      {
        counter++;
      }
    }
  }
  if(counter > 2)
  {
    return i;
    break;
  }
  i++;
 }
 return 10;
}
