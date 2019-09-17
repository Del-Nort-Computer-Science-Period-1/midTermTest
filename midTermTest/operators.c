//
//  operators.c
//  midTermTest
//
//  Created by Vollrath, Tianna on 9/17/19.
//  Copyright © 2019 Szeto, Colin. All rights reserved.
//

#include "operators.h"
int operators(void) 
{
    int answer;
    //The question
    puts("What does the + operator do in C?");
    puts("A: Subtracts two operands");
    puts("B: Adds two operands");
    puts("C: Divides two operands");
    puts("D: Multiplies two operands");
    
    //User input
    puts("Enter your answer from A to D \n");
    while( (answer=getchar() != '\n') && answer != EOF);
    switch (answer)
    
    {
        case 'A':
        case 'a':
            puts("Sorry, you are incorrect.");
            break;
        case 'B':
        case 'b':
            puts("Correct!");
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
