# SoftwareEngineering1---Gerard-Kealan
I (Gerard Colman) tackled 2 of the more complicated functions in this project.  These were the Picking Player function and the Placing Tokens function.  
I ended up making 2 versions of each of the functions.  1 using structs and 1 using multidimensional arrays.  
The picking players functions was relatively easy to write but took a bit of fine tuning.  
It basically scans in the player name and colour choice.  The ColourShort corresponds to the 1 letter icon to represent tokens on the board 
while ColourLong is the full colour name when printing turns.

The PlacingTokens function was a bit more complicated and went through many different iterations.  The first one was written solely by me.  It scanned in a row selection from the user then used a for loop to check if the selected row was clear.  If it wasn’t it would prompt the user to select another row.  It would also use a for loop to check if the entire first row was full and would then increment a stack pointer to the next level in the stack.  This version had a few flaws and was therefore scrapped, and the next and final version was written in tandem with my partner who provided crucial feedback.  This version did a lot of the same things except we changed the nested for loop idea on favour of the player count multiplied by 4 and the used the modulo operator to get individual players.  We still used a for loop to check if the rows were clear but this time around, we filled the multidimensional board squares from the bottom as then we didn’t have to do any reshuffling and made our lives a bit easier.  Finally, we called the print board function to show the user the final arrangement of tokens.

I also wrote a simple dice function using rand() linked with time to generate a random number between 1 and 6 and co-authored the main function with my partner. 



I (Kealan) was tasked with a number of functions these include Obstart(), Obstacles(), Turns(), InspectorGadget(), Sidestep() and Winner().
Most of these were simple tasks, however turns and Sidestep were a bit tricky due to their main role within the program and multitude of actions required within them. 
All the functions I wrote run off the same data sets as included in main, using the BoardIndex array as a stack and the players struct to reference data. 
I also was resposible for testing of the code for different numbers of players and ensuring that the mechanics of the game work. 
I authored the main function with my partner and made tweaks to both sets of code in order to make them run correctly together and ensuring there are no errors or bugs within the code.
I also commented all my code and have explained how it works through these comments.
