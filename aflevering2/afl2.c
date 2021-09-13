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
    scanf("%i", &isec);

    week = isec / SECONDS_IN_WEEK;
    rest = isec % SECONDS_IN_WEEK;
    day = rest / SECONDS_IN_DAY;
    rest = rest % SECONDS_IN_DAY;
    hour = rest / SECONDS_IN_HOUR;
    rest = rest % SECONDS_IN_HOUR;
    minute = rest / SECONDS_IN_MINUTE;
    rest = rest % SECONDS_IN_MINUTE;
    second = rest;

    if (week >= 1 ) {
      printf("\n%i Weeks %i Days %i Hours %i Minutes %i Seconds \n", week, day, hour, minute, second);
    } else if (day >= 1) {
      printf("\n%i Days %i Hours %i Minutes %i Seconds \n", day, hour, minute, second);
    } else if (hour >= 1) {
      printf("\n%i Hours %i Minutes %i Seconds \n", hour, minute, second);
    } else if (minute >= 1) {
      printf("\n%i Minutes %i Seconds \n", minute, second);
    } else {
      printf("\n%i Seconds \n", second);
    }

    return 0;
}
