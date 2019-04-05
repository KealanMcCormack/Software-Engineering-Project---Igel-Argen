extern char boardIndex[6][9][100];
int Obstacles(void)
{
  boardIndex[1][3][0] = 'X';
  boardIndex[2][6][0] = 'X';
  boardIndex[3][4][0] = 'X';
  boardIndex[4][5][0] = 'X';
  boardIndex[5][2][0] = 'X';
  boardIndex[6][7][0] = 'X';
}
