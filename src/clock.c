#include "clock.h"
#include <stdio.h>
#include <time.h>

void initClock(Clock* clock) {
  time_t now = time(NULL);
  struct tm* local = localtime(&now);

  clock->hour = local->tm_hour;
  clock->min = local->tm_min;
  clock->sec = local->tm_sec;
}

void updateTime(Clock* clock) {
  clock->sec++;

  if (clock->sec >= 60) {
    clock->sec = 0;
    clock->min++;

    if (clock->min >= 60) {
      clock->min = 0;
      clock->hour = (clock->hour + 1) % 12;
    }
  }
}

void displayTime(const Clock* clock) {
  printw("%02d:%02d:%02d", clock->hour, clock->min, clock->sec);
  refresh();
}

