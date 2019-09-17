//
//  Lab3.c
//  DaneLab1
//
//  Created by Vestal, Dane on 9/17/19.
//  Copyright © 2019 Vestal, Dane. All rights reserved.
//

#include "Lab3.h"
#include <stdio.h>
#include <math.h>

int Lab3(void) {
    
    long time, days, hours, minutes, seconds;
    
    printf ("\nhow many seconds");
    scanf ("%ld", &time);
    days = (time / 86400);
    hours = ((time % 86400)/ 3600);
    minutes = (((time % 86400) % 3600)/60);
    seconds = ((((time % 86400) % 3600)%60));
    printf ("Days- %ld\nHours- %ld\nMinutes- %ld\nSeconds- %ld\n", days, hours, minutes, seconds);
    
    return 0;
}
