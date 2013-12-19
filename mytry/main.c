#include <ncurses.h>
#include <stdio.h>
#include <stdlib.h>

int main()
{	
	int ch;

	initscr();			/* Start curses mode   */

	FILE *fp;
  	int status;
  	char path[1035];

  	/* Open the command for reading. */
  	fp = popen("ls", "r");
  	if (fp == NULL) {
    	printf("Failed to run command\n" );
    	exit;
  	}

  	/* Read the output a line at a time - output it. */
  	while (fgets(path, sizeof(path)-1, fp) != NULL) {
    	printf("%s", path);
  	}

  	printw(path);

  /* close */
  pclose(fp);
	refresh();
	getch();            /* Wait for user input */
	endwin();           /* End curser mode */

}