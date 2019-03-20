int Obstacles(int Column)
{
  int count, counts;
 for(count=1;count<Column;count++)
 {
   for(counts=1;counts<7;counts++)
   {
     if(array[counts][count] != ' ' && array[counts][count] != 33)//Empty space or what we use as a sign marking an obstacle
     {
       return 2; //Will tell us that the piece cannot move yet
       count = Column;
       break;
     }
     if(array[counts][count] == 33 && array[counts][count][1] != ' ')
     {
       return 2; //Will tell us that the piece cannot move yet
       count = Column;
       break;
     }
   }
   counts=1;
 }
}
