#include <ncurses.h>

int main()
{
	initscr();                 // Start cursers mode
	printw("Hello world!");    // Print hello world
	refresh();                 // Print it on to the real screen
	getch();                   // Wait for user input
	endwin();                  // End curser mode
	
	return 0;
}
