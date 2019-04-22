extern char boardIndex[6][9][25];
void InspectorGadget(void)
{
  int row, column, count;
  printf("Which square would you like to look at?\nEnter row space column\n");
  scanf("%d %d", &row, &column); // Takes row and column
  row = row - 1; //Array starts at 0,0 so variables must be lowered
  column = column - 1;
  for(count=0;boardIndex[row][column][count] != '\0' ;count++)
  {
    printf("(%d) %c \n",count, boardIndex[row][column][count]);//prints square of the board
  } //prints token colour and location in the stack 
}
