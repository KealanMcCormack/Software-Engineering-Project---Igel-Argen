extern char boardIndex[6][9][25];
void PrintBoard(void)//prints board
{
  int count, counts=1, a=1;
  printf("    1    2    3    4    5    6    7    8    9 \n");
   for(count = 0;count!=6;count++)
   {
    printf("%d ", a);//prints row numbers
    for(counts = 0;counts!=9;counts++)
    {
     printf("| %c |", boardIndex[count][counts][0]);//prints squares of the board
    }
    printf("\n");
    a++;
  }
}
