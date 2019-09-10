//
//  fdt.c
//  midTermTestP1
//
//  Created by Ravula, Neeharika on 9/10/19.
//  Copyright © 2019 Szeto, Colin. All rights reserved.
//

#include "fdt.h"

int fdtAskQuestion(void) {
    int answer;
    //The question
    puts("How many bytes does the float data type have? ");
    puts("A. 8 bytes.");
    puts("B. 10 bytes");
    puts("C. 4 bytes");
    puts("D. 2 bytes. \n");
    //User input
    puts("Enter your answer from A to D \n");
    answer = getchar();
    switch(answer)
    {
        case 'A':
        case 'a':
            puts("Sorry, you are incorrect.");
            puts("The double data type contains 8 bytes. ");
            break;
        case 'B':
        case 'b':
            puts("Sorry, you are incorrect.");
            puts("The long double data type contains 10 bytes.");
            break;
        case 'C':
        case 'c':
            puts("Very good, you are correct!!");
            puts("The float data type contains 4 bytes.");
            break;
        case 'D':
        case 'd':
            puts("Sorry. C is correct. ");
            break;
        default:
            puts("You responded with an inappropriate number");
            
    }
    return 0;
}

