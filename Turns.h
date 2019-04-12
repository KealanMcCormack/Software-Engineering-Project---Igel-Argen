extern char boardIndex[6][9][25];
void Turns(void)
{
  int temp, counter=0, count, counts, dice;
  srand(time(NULL));
  dice = rand() % 6 + 1;
  printf("\nTime to Move\n");
  for(count=1;count<10;count++)
  {
   printf("| %c |", boardIndex[dice][count][0]);
   if(boardIndex[dice][count][0] != '\0' && boardIndex[dice][count][0] != 'X')
   {
     counter++;
   }
  }
  if(counter > 0)
  {
  printf("\nWhich counter would you like to move?\n");
  printf("%d\n ", dice);
  scanf("%d", temp);

  if(boardIndex[dice][temp][0] != '\0' && boardIndex[dice][temp][0] != 'X')//Come back when enum is done
  {
    for(counts=0;counts<20;counts++)
    {
      boardIndex[dice][temp][counts] = boardIndex[dice][temp][counts+1];
    }
  }
 }
}
