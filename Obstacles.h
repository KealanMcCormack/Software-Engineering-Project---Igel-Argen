extern char boardIndex[6][9][25];
int Obstacles(void)
{//Removes obstacles as tokens move past up the board
  int count, counts, counter=0;
  for(count=0;count<6;count++)//Loops 6 times
  {
     if(boardIndex[count][0][0] == '\0')//Enters statement if square is empty
     {  //count moves through rows in the board
       counter++;  //counter increases if squares in the column are empty
     }
     if(counter==6 && boardIndex[4][1][0] == 'X')
     {//if all rows are empty and X still remains staement is entered
       for(counts=0;counts<20;counts++)
       {
         boardIndex[4][1][counts] = boardIndex[4][1][counts+1];//overwrites X and moves stack down
         count = 7;//exits loop
       }
     }
  }
  counter = 0;//Restarts counter at 0
  for(count=0;count<6;count++)//All loops are the same as the first, just different column being checked and obstacle being removed
  {
     if(boardIndex[count][1][0] == '\0')
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
  for(count=0;count<6;count++)
  {
     if(boardIndex[count][2][0] == '\0')
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
  for(count=0;count<6;count++)
  {
     if(boardIndex[count][3][0] == '\0')
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
  for(count=0;count<6;count++)
  {
     if(boardIndex[count][4][0] == '\0')
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
  for(count=0;count<6;count++)
  {
     if(boardIndex[count][5][0] == '\0')
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
