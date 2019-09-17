//
//  Lab1.c
//  DaneLab1
//
//  Created by Vestal, Dane on 9/17/19.
//  Copyright © 2019 Vestal, Dane. All rights reserved.
//

#include "Lab1.h"
#include <stdio.h>
#include <math.h>

int Lab1(void) {
    
    double side1;
    double side2;
    
    printf("\nside1");
    scanf("%lf",&side1);
    printf("side2");
    scanf("%lf",&side2);
    double side3 = sqrt(side1*side1 + side2*side2);
    printf ("the hypotenuse is %lf",side3);
    
    return 0;
}

