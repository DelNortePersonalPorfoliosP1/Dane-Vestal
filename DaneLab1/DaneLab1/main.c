#include <stdio.h>
#include <math.h>

int main(int argc, const char * argv[]) {
    
    long time, days, hours, minutes, seconds;
    
    printf ("how many seconds");
    scanf ("%ld", &time);
    days = (time / 86400);
    hours = ((time % 86400)/ 3600);
    minutes = (((time % 86400) % 3600)/60);
    seconds = ((((time % 86400) % 3600)%60));
    printf ("Days- %ld\nHours- %ld\nMinutes- %ld\nSeconds- %ld\n", days, hours, minutes, seconds);
    
    return 0;
}

