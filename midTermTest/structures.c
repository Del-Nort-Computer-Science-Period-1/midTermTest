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
            puts("Array is a data structure consisting of a collection of values and variables.");
            break;
        case 'B':
        case 'b':
            puts("Yes, correct!");
            break;
        case 'C':
        case 'c':
            puts("Sorry, you are incorrect.");
            puts("Stack is a linear data structure that allows data to be added or removed from only the top.");
            break;
        case 'D':
        case 'd':
            puts("Sorry, you are incorrect.");
            puts("Tree is a collection of nodes where each node is a data structure consisting of a value." );
            break;
    }
    return 0;

}
