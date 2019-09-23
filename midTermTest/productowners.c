//
//  productowners.c
//  midTermTest
//
//  Created by Do, Kevin on 9/9/19.
//  Copyright © 2019 Szeto, Colin. All rights reserved.
//

#include "productowners.h"
int productowners(void) {
    
    int answer=0;
    int loop = 0;
    while (loop < 1)
    {
    puts("Who created the C language?\n");
    puts("(A): Dennis Ritchie\n");
    puts("(B): James Gosling\n");
    puts("(C): Bjarne Stroustrup\n");
    puts("(D): Nobody\n");
    
    answer=getchar();
       answer=getchar();
    switch(answer)
    {
        case 'A':
        case 'a':;
            puts("Correct!");
            loop++;
            answer=1;
            break;
        case 'B':
        case 'b':;
            puts("Incorrect.");
            loop++;
            break;
        case 'C':
        case 'c':;
            puts("Incorrect.");
            loop++;
            break;
        case 'D':
        case 'd':;
            puts("Incorrect.");
            loop++;
            break;
        default:
            puts("Thats not an option, pick again");
            break;
    }
    }
    
    return answer;
}
