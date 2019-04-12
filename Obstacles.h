extern char boardIndex[6][9][25];
int Obstacles(void)
{
  int count, counts, counter=0;
  for(count=1;count<7;count++)
  {
     if(boardIndex[count][1][0] == '\0')
     {
       counter++;
     }
     if(counter==6)
     {
       for(counts=0;counts<20;counts++)
       {
         boardIndex[5][2][counts] = boardIndex[5][2][counts+1];
         count = 7;
       }
     }
  }
  counter = 0;
  for(count=1;count<7;count++)
  {
     if(boardIndex[count][2][0] == '\0')
     {
       counter++;
     }
     if(counter==6)
     {
       for(counts=0;counts<20;counts++)
       {
         boardIndex[1][3][counts] = boardIndex[1][3][counts+1];
         count = 7;
       }
     }
  }
  counter = 0;
  for(count=1;count<7;count++)
  {
     if(boardIndex[count][3][0] == '\0')
     {
       counter++;
     }
     if(counter==6)
     {
       for(counts=0;counts<20;counts++)
       {
         boardIndex[3][4][counts] = boardIndex[3][4][counts+1];
         count = 7;
       }
     }
  }
  counter = 0;
  for(count=1;count<7;count++)
  {
     if(boardIndex[count][4][0] == '\0')
     {
       counter++;
     }
     if(counter==6)
     {
       for(counts=0;counts<20;counts++)
       {
         boardIndex[4][5][counts] = boardIndex[4][5][counts+1];
         count = 7;
       }
     }
  }
  counter = 0;
  for(count=1;count<7;count++)
  {
     if(boardIndex[count][5][0] == '\0')
     {
       counter++;
     }
     if(counter==6)
     {
       for(counts=0;counts<20;counts++)
       {
         boardIndex[2][6][counts] = boardIndex[2][6][counts+1];
         count = 7;
       }
     }
  }
  counter = 0;
  for(count=1;count<7;count++)
  {
     if(boardIndex[count][6][0] == '\0')
     {
       counter++;
     }
     if(counter==6)
     {
       for(counts=0;counts<20;counts++)
       {
         boardIndex[6][7][counts] = boardIndex[6][7][counts+1];
         count = 7;
       }
     }
  }
}
