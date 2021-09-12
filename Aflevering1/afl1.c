//opt. Ikke out uge, dage, osv. hvis tallet er lig med 0

#include <stdio.h>
#include <stdlib.h>

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

    week = isec / 604800;
    rest = isec % 604800;
    day = rest / 86400;
    rest = rest % 86400;
    hour = rest / 3600;
    rest = rest % 3600;
    minute = rest / 60;
    rest = rest % 60;
    second = rest;

    // printf("\n%i%s%i%s%i%s%i%s%i%s", week, " Weeks ", day, " Days ",  hour, " Hours ", minute, " Minutes ", second, " Seconds ");
    printf("\n%i Weeks %i Days %i Hours %i Minutes %i Seconds \n", week, day, hour, minute, second);
    return 0;

}
