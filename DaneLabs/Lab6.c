//
//  Lab6.c
//  DaneLab1
//
//  Created by Vestal, Dane on 9/26/19.
//  Copyright © 2019 Vestal, Dane. All rights reserved.
//

#include "Lab6.h"
int Lab6(void){
    int i, n;
    int x = 0;
    
    printf("\nInput the number of elements to be stored in the array :");
    scanf("%d",&n);
    
    printf("\nInput %d elements in the array :\n",n);
    for(i=0;i<n;i++)
    {
        printf("\n %d : ",i);
        while (x<i){
            printf ("L");
            x++;
        }
        x = 0;
    }
    return 0;
}

