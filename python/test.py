#! /usr/bin/env python

import curses

myscreen = curses.initscr()

myscreen.border(0)
curses.start_color()
curses.init_pair(1, curses.COLOR_RED, curses.COLOR_BLACK)
myscreen.addstr(12, 25, "Python curses in action!", curses.color_pair(1))
curses.init_pair(2, curses.COLOR_YELLOW, curses.COLOR_BLACK)
myscreen.addstr(13, 25, "Python curses in action!", curses.color_pair(2))
curses.init_pair(3, curses.COLOR_BLUE, curses.COLOR_BLACK)
myscreen.addstr(14, 25, "Python curses in action!", curses.color_pair(3))
myscreen.refresh()
myscreen.getch()

curses.endwin()
