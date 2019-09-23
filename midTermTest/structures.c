//
//  structures.c
//  midTermTest
//
//  Created by Huynh, Kaitlyn on 9/6/19.
//  Copyright © 2019 Szeto, Colin. All rights reserved.
//

#include "structures.h"
int structures(void)
{
    int answer=0;
    //The question
    int loop = 0;
    while (loop < 1)
    {
    puts("Which of the following is NOT a data structure in C?");
    puts("A. Array");
    puts("B. Bob the Builder");
    puts("C. Stack");
    puts("D. Tree");
    
    //User input
    puts("Enter your answer from A to D \n");
    answer=getchar();
       answer=getchar();
    switch (answer)
    
    {
        case 'A':
        case 'a':;
            puts("Sorry, you are incorrect.");
            loop++;
            break;
        case 'B':
        case 'b':;
            puts("Yes, correct!");
            loop++;
            answer=1;
            break;
        case 'C':
        case 'c':;
            puts("Sorry, you are incorrect.");
            loop++;
            break;
        case 'D':
        case 'd':;
            puts("Sorry, you are incorrect.");
            loop++;
            break;
            default:
            puts("Thats not an option, pick again");
            break;
    }
    }
    return answer;

}
