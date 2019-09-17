#include <stdio.h>
#include "Lab1.h"
#include "Lab2.h"
#include "Lab3.h"
#include "Lab4.h"
#include "Lab5.h"

int main(void) {
    
    int lab;
    
    printf("what Lab (1-5) type in number?");
    scanf("%i",&lab);
    
    if (lab == 1){
    Lab1();
    }
    if (lab == 2){
        Lab2();
    }
    if (lab == 3){
        Lab3();
    }
    if (lab == 4){
        Lab4();
    }
    if (lab == 5){
        Lab5();
    }
    else {
        printf ("you can only selests labs 1 thru 5");
    }

    return 0;
}

