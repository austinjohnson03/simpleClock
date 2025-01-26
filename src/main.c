#include <ncurses.h>
#include "clock.h"

int main() {
  Clock clock;

  initscr();
  noecho();
  curs_set(FALSE);

  initClock(&clock);

  while (1) {
    clear();

    displayTime(&clock);

    napms(1000);

    updateTime(&clock);
  }

  endwin();
  return 0;
}
