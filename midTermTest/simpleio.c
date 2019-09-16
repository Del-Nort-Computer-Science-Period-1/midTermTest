//
//  simpleio.c
//  midTermTestP1
//
//  Created by Joseph, Andrew on 9/12/19.
//  Copyright © 2019 Szeto, Colin. All rights reserved.
//

#include "simpleio.h"
int simpleio(int argc) {
    int key = 0;
    int question=0;
    int loop = 0;
    while (loop < 1) {
        puts("What is the sign for integers?\n Put the sign that goes after the percent sign.\n A d\n B i\n C c\n D A and B\n");
        
        question = getchar();
        switch(question)
        {
            case 'A':
            case 'a':;
                puts("Incorrect");
                loop++;
                break;
            case 'B':
            case 'b':;
                puts("Incorrect");
                loop++;
                break;
            case 'C':
            case 'c':;
                puts("Incorrect");
                loop++;
                break;
            case 'D':
            case 'd':;
                puts("Corect");
                question=1;
                loop++;
                break;
            default:
                puts("That's not even one of the options");
                break;
        };
        
    };
    key=1;
    return question;
    
}
