//
//  Lab5.c
//  DaneLab1
//
//  Created by Vestal, Dane on 9/17/19.
//  Copyright © 2019 Vestal, Dane. All rights reserved.
//

#include "Lab5.h"
#include <stdio.h>
#include <math.h>

int Lab5(void) {
    double f, c, fact, n;
    
    
    printf("\ntemp in f\n");
    scanf("%lf", &f);
    
    fact = f-32;
    c = ((5*fact)/9);

    printf("%lf degrees c \n", c);
    n = fabs(c);
    
    if (c < 0) {
        printf("it is %lf degrees below freezing point",n);
    }
    
    else if (c > 0) {
        printf("it is %lf above freezing point", n);
    }
    else{
        
        printf("It is at freezing temperature");
        
    }
    return 0;
}
