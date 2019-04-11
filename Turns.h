extern char boardIndex[6][9][25];
int Turns(int dice, int playerno)
{
  int temp, counter=0, count, counts;
  printf("Time to Move\n");
  for(count=1;count<10;count++)
  {
   printf("| %c |", boardIndex[dice][count][0]);
   if(boardIndex[dice][count][0] != ' ' && boardIndex[dice][count][0] != 'X')
   {
     counter++;
   }
  }
  if(counter > 0)
  {
  printf("Which counter would you like to move?\n");
  printf("%d ", dice);
  scanf("%d", temp);

  if(boardIndex[dice][temp][0] != ' ' && boardIndex[dice][temp][0] != 'X')//Come back when enum is done
  {
    for(counts=0;counts<20;counts++)
    {
      boardIndex[dice][temp][counts] = boardIndex[dice][temp][counts+1];
    }
  }
 }
}
