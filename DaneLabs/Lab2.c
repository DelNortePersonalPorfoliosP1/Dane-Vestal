//
//  Lab2.c
//  DaneLab1
//
//  Created by Vestal, Dane on 9/17/19.
//  Copyright © 2019 Vestal, Dane. All rights reserved.
//

#include "Lab2.h"
#include <stdio.h>

int Lab2(void) {
    
    int arr1[100];
    int i, mx, mn, n;
    
    printf("Input the number of elements to be stored in the array :");
    scanf("%d",&n);
    
    printf("Input %d elements in the array :\n",n);
    for(i=0;i<n;i++)
    {
        printf("element - %d : ",i);
        scanf("%d",&arr1[i]);
    }
    
    
    mx = arr1[0];
    mn = arr1[0];
    
    for(i=1; i<n; i++)
    {
        if(arr1[i]>mx)
        {
            mx = arr1[i];
        }
        
        
        if(arr1[i]<mn)
        {
            mn = arr1[i];
        }
    }
    printf("Maximum element is : %d\n", mx);
    printf("Minimum element is : %d\n\n", mn);
    
    return 0;
}

