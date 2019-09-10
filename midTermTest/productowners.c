//
//  productowners.c
//  midTermTest
//
//  Created by Do, Kevin on 9/9/19.
//  Copyright © 2019 Szeto, Colin. All rights reserved.
//

#include "productowners.h"
int productowners(void) {
    
    int answer;
    puts("Who created the C language?\n");
    puts("(A): Dennis Ritchie\n");
    puts("(B): James Gosling\n");
    puts("(C): Bjarne Stroustrup\n");
    puts("(D): Nobody\n");
    
    while( (answer=getchar() != '\n') && answer != EOF);
    switch(answer)
    {
        case 'A':
        case 'a':
            puts("Correct!");
            break;
        case 'B':
        case 'b':
            puts("Incorrect.");
            break;
        case 'C':
        case 'c':
            puts("Incorrect.");
            break;
        case 'D':
        case 'd':
            puts("Incorrect.");
            break;
    }
    
    
    return 0;
}
