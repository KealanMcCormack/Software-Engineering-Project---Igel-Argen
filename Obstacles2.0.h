extern char boardIndex[6][9][100];
extern Player players[6];
int Obstacles(int playerno, int counterno)
{
  int count, counts, x, y;
  if(counterno == 1)
  {
   x = players[playerno].counter_1[0];
   y = players[playerno].counter_1[1];
  }
  if(counterno == 2)
  {
   x = players[playerno].counter_2[0];
   y = players[playerno].counter_2[1];
  }
  if(counterno == 3)
  {
   x = players[playerno].counter_3[0];
   y = players[playerno].counter_3[1];
  }
  if(counterno == 4)
  {
   x = players[playerno].counter_4[0];
   y = players[playerno].counter_4[1];
  }
  if(boardIndex[x][y][0]=='X')
  {
    for(count=1;count<x;count++)
    {
      for(counts=1;counts<7;counts++)
      {
        if(boardIndex[counts][count][0] != ' ' || boardIndex[counts][count][0] != 'X')//Empty space or what we use as a sign marking an obstacle
        {
          return 2; //Will tell us that the piece cannot move yet
          count = x;
          break;
        }
        if(boardIndex[counts][count][0] == 'X' || boardIndex[counts][count][1] != ' ')
        {
          return 2; //Will tell us that the piece cannot move yet
          count = x;
          break;
        }
      }
      counts=1;
    }
  }
}
