#ifndef CLOCK_H
#define CLOCK_H

#include <time.h>

typedef struct Clock {
  int hour;
  int min;
  int sec;
} Clock;

void initClock(Clock* clock);
void updateTime(Clock* clock);
void displayTime(const Clock* clock);

#endif // CLOCK_H
