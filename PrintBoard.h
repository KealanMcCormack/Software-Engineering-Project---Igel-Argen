int PrintBoard(void)
{
  int count, counts=1, a=1;
  printf("    1    2    3    4    5    6    7    8    9 \n");
   for(count = 1;count!=7;count++)
   {
    printf("%d ", a);
    for(counts = 1;counts!=10;counts++)
    {
     printf("| %c |",boardIndex[count][counts]);
    }
    printf("\n");
    a++;
    counts = 1;
  }
}
