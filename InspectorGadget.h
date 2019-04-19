extern char boardIndex[6][9][25];
void InspectorGadget(void)
{
  int row, column, count;
  printf("Which square would you like to look at?\nEnter row space column\n");
  scanf("%d %d", &row, &column);
  for(count=0;boardIndex[row-1][column-1][count]!= '\0' ;count++)
  {
    printf("%c\n", boardIndex[row][column][count]);
  }
}
