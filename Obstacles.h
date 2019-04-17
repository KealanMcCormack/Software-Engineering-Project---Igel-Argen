extern char boardIndex[6][9][25];
int Obstacles(void)
{
  int count, counts, counter=0;
  for(count=0;count<7;count++)
  {
     if(boardIndex[count][1][0] == '\0')
     {
       counter++;
     }
     if(counter==6 && boardIndex[4][1][0] == 'X')
     {
       for(counts=0;counts<20;counts++)
       {
         boardIndex[4][1][counts] = boardIndex[4][1][counts+1];
         count = 7;
       }
     }
  }
  counter = 0;
  for(count=0;count<7;count++)
  {
     if(boardIndex[count][2][0] == '\0')
     {
       counter++;
     }
     if(counter==6 && boardIndex[0][2][0]=='X')
     {
       for(counts=0;counts<20;counts++)
       {
         boardIndex[0][2][counts] = boardIndex[0][2][counts+1];
         count = 7;
       }
     }
  }
  counter = 0;
  for(count=0;count<7;count++)
  {
     if(boardIndex[count][3][0] == '\0')
     {
       counter++;
     }
     if(counter==6 && boardIndex[2][3][0]=='X')
     {
       for(counts=0;counts<20;counts++)
       {
         boardIndex[2][3][counts] = boardIndex[2][3][counts+1];
         count = 7;
       }
     }
  }
  counter = 0;
  for(count=0;count<7;count++)
  {
     if(boardIndex[count][4][0] == '\0')
     {
       counter++;
     }
     if(counter==6 && boardIndex[3][4][0]=='X')
     {
       for(counts=0;counts<20;counts++)
       {
         boardIndex[3][4][counts] = boardIndex[3][4][counts+1];
         count = 7;
       }
     }
  }
  counter = 0;
  for(count=0;count<7;count++)
  {
     if(boardIndex[count][5][0] == '\0')
     {
       counter++;
     }
     if(counter==6 && boardIndex[1][5][0]=='X')
     {
       for(counts=0;counts<20;counts++)
       {
         boardIndex[1][5][counts] = boardIndex[1][5][counts+1];
         count = 7;
       }
     }
  }
  counter = 0;
  for(count=0;count<7;count++)
  {
     if(boardIndex[count][6][0] == '\0')
     {
       counter++;
     }
     if(counter==6 && boardIndex[5][6][0]=='X')
     {
       for(counts=0;counts<20;counts++)
       {
         boardIndex[5][6][counts] = boardIndex[5][6][counts+1];
         count = 7;
       }
     }
  }
}
