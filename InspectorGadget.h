extern char boardIndex[6][9][25];
void InspectorGadget(void)
{
  int row, column, count;
  printf("Which square would you like to look at?\nEnter row space column\n");
  scanf("%d %d", &row, &column);
  row = row - 1;
  column = column - 1;
  for(count=0;boardIndex[row][column][count] != '\0' ;count++)
  {
    printf("(%d) %c \n",count, boardIndex[row][column][count]);
  }
}
