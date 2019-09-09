//
//  Cf.c
//  midTermTest
//
//  Created by Bulkin, Lola on 9/6/19.
//  Copyright © 2019 Szeto, Colin. All rights reserved.
//

#include "Cf.h"
int DF(void) {
    
    int answer;
    puts("Do... while loops test the condition at:");
    puts("a. at the beginning of the loop");
    puts("b. at the end of the loop");
    puts("c. both a and b");
    puts("d. none of these. \n");
    puts("Enter your answer from 1 to 4 \n");
    
    while( (answer=getchar() != '\n') && answer != EOF);
    switch (answer)
    {
        case 'a': puts("Sorry, you're incorrect");
            break;
        case 'b': puts("Nice! You're correct");
            break;
        case 'c': puts("Sorry, you're incorrect");
            break;
        case 'd': puts("Sorry, you're incorrect");
            break;
        default:
            puts("You responded with an innapropriate answer");
            
    }
    return 0;
}
