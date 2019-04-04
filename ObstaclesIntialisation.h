extern char boardIndex[6][9][100];
int Obstacles(void)
{
  boardIndex[0][3][0] = 'X';
  boardIndex[1][6][0] = 'X';
  boardIndex[2][4][0] = 'X';
  boardIndex[3][5][0] = 'X';
  boardIndex[4][2][0] = 'X';
  boardIndex[5][7][0] = 'X';
}
