extern char boardIndex[6][9][25];
int WinnaWinnaChickenDinna(int playerCount)
{
  int count=0, counts=0, counter=0, i=0;
while(i < playerCount)
{
  for(count=0;count;count++)
  {
    for(counts=0;counts<12;counts++)
    {
      if(Players[i].Colourshort == boardIndex[counts][9][counts])
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
}
