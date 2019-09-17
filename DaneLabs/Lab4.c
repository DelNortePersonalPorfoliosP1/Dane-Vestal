//
//  Lab4.c
//  DaneLab1
//
//  Created by Vestal, Dane on 9/17/19.
//  Copyright © 2019 Vestal, Dane. All rights reserved.
//

#include "Lab4.h"
#include <stdio.h>
#include <math.h>

int Lab4(void) {
    
    double l;
    double w;
    printf("\nlength \n");
    scanf("%lf",&l);
    printf("width \n");
    scanf("%lf",&w);
    
    double area = l * w;
    double perimeter = 2*l + 2*w;
    
    printf("the area of a rectangle with a length of %lf and a width of %lf is %lf \n", l, w, area);
    printf("the perimeter of a rectangle with a length of %lf and a width of %lf is %lf \n", l, w, perimeter);
    
    return 0;
}
