//
//  main.c
//  FizzBuzz
//
//  Created by David Eastmond on 2017-07-07.
//  Copyright © 2017 David Eastmond. All rights reserved.
//

#include <stdio.h>
#include <stdbool.h>

// This is a mini-function that tells us if xNumber is a multiple of xFactor
int isMultiple (int xNumber, int xFactor) {
    
    if (xNumber % xFactor == 0) {
        return true;    }
    return false;
}

int main(int argc, const char * argv[]) {
    /* Using a loop, iterate through. First we test if x is a multiple of both 3 and 5
     and print the associated output. Then we check if x is a multiple of 3, then finally of 5
     and print the associated output. If none of the 3 conditions apply, then we output the number, what
     ever 'x' is.
     */
    for (int x = 1; x <= 100; x++){
        
        if (isMultiple(x, 3) == true && isMultiple(x, 5) == true) {
            printf("FizzBuzz\n");
        } else if (isMultiple(x, 3) == true ){
            printf("Fizz\n");
        } else if (isMultiple(x, 5) == true) {
            printf("Buzz\n");
            
        } else {
            printf("%d", x);
            printf("\n");
        }
        
    }
    return 0;
}
