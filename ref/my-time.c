#include <stdbool.h>
#include <stdio.h>

// TODO:
//  24-hour clock
//  calc seconds since last midnight
//  calc seconds until next midnight
//  calc percent ratio of day passed/left

void clock_time(int hour, int minute, int second) {
  bool am = 0;
  int newHour = 0;

  if (hour < 12) {
    am = true;
    newHour = hour;
  } else {
    if (hour >= 12) {
      if (hour == 24)
        am = true;
      else
        am = false;
      if (hour == 12)
        newHour = hour;
      else
        newHour = hour - 12;
    }
  }

  if (am == true)
    printf("Time: %i:%i:%iam\n", newHour, minute, second);
  else if (am == false)
    printf("Time: %i:%i:%ipm\n", newHour, minute, second);
}

int get_seconds(int hour, int minute, int second) {
  return ((hour * 3600) + (minute * 60) + second);
}

int main() {
  clock_time(6, 25, 15);
  clock_time(12, 33, 22);
  clock_time(23, 0, 22);
  clock_time(24, 5, 5);

  float our_time = get_seconds(12, 50, 5);
  float day_time = get_seconds(24, 0, 0);

  float seconds_left = day_time - our_time;
  float percent = our_time / day_time;

  printf("Our time: %0.3f\n", our_time);
  printf("Seconds left in the day: %0.3f\n", seconds_left);
  printf("Percentage of day passed: %0.3f\n", percent);
}
