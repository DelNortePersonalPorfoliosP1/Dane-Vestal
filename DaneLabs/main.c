#include <stdio.h>
#include "Lab1.h"
#include "Lab2.h"
#include "Lab3.h"
#include "Lab4.h"
#include "Lab5.h"

int main(void) {
    
    int lab;
    int a = 1;
    int b;
    int l = 1;
    
    while (a==1){
        
    
    printf("what Lab (1-5) type in number?");
    scanf("%i",&lab);
    
    if (lab == 1){
    Lab1();
    }
    else if (lab == 2){
        Lab2();
    }
    else if (lab == 3){
        Lab3();
    }
    else if (lab == 4){
        Lab4();
    }
    else if (lab == 5){
        Lab5();
    }
    else {
        printf ("you can only select labs 1 thru 5");
    }
        while (l==1){
    printf ("\ndo you want to run another lab 2 yes  1 no");
    scanf ("%i",&b);
        if (b==1){
            a++;
            break;
        }
        else if(b==2){
            printf ("\n");
            break;
        }
        else{
            printf ("not an option");
            
        }
        }
    }
    return 0;
}

