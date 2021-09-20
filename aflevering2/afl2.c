#include <stdio.h>
#include <stdlib.h>


#define SECONDS_IN_MINUTE 60
#define SECONDS_IN_HOUR (SECONDS_IN_MINUTE * 60)
#define SECONDS_IN_DAY (SECONDS_IN_HOUR * 24)
#define SECONDS_IN_WEEK (SECONDS_IN_DAY * 7)

int main(void){
    int isec,
    rest,
    week,
    day,
    hour,
    minute,
    second;

    printf("Enter seconds: ");
    scanf("%d", &isec);

    week = isec / SECONDS_IN_WEEK;
    rest = isec % SECONDS_IN_WEEK;
    day = rest / SECONDS_IN_DAY;
    rest = rest % SECONDS_IN_DAY;
    hour = rest / SECONDS_IN_HOUR;
    rest = rest % SECONDS_IN_HOUR;
    minute = rest / SECONDS_IN_MINUTE;
    rest = rest % SECONDS_IN_MINUTE;
    second = rest;


    if (week >= 1)  {
      printf(week > 1 ? ("\n%i Weeks ") : ("\n%i Week "), week);
    }
    if (day >= 1) {
      printf(day > 1 ? ("%i days ") : ("%i day "), day);
    }
    if (hour >= 1) {
      printf(hour > 1 ? ("%i hours ") : ("%i hour "), hour);
    }
    if (minute >= 1) {
      printf(minute > 1 ? ("%i minutes ") : ("%i minute "), minute);
    }
    if (second >= 1) {
      printf(second > 1 ? ("%i seconds ") : ("%i second "), second);
    }

    return 0;
}
