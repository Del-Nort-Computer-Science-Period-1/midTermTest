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
    int answer;
    //The question
    puts("Which of the following is NOT a data structure in C?");
    puts("A. Array");
    puts("B. Bob the Builder");
    puts("C. Stack");
    puts("D. Tree");
    //User input
    puts("Enter your answer from A to D \n");
    answer = getchar();
    switch (answer)
    
    {
        case 'A':
        case 'a':
            puts("Sorry, you are incorrect.");
            break;
        case 'B':
        case 'b':
            puts("Yes, correct!");
            break;
        case 'C':
        case 'c':
            puts("Sorry, you are incorrect.");
            break;
        case 'D':
        case 'd':
            puts("Sorry, you are incorrect.");
            break;
    }
    return 0;
}
