//
//  devopsIDE.c
//  midTermTest
//
//  Created by Taha, Nick on 9/6/19.
//  Copyright © 2019 Taha, Nick. All rights reserved.
//

#include "devopsIDE.h"
int devopsIDE(void) {
        
        int (answer)=0;
        //The question
        puts("Can the C language have more than one function? : ");
        puts("A. Yes, but IT WILL have detrimental effects to the code.");
        puts("B. Yes, but it must be implemented correctly");
        puts("C. No, it may crash the code");
        puts("D. No, it may crash the ENTIRE computer. \n");
        puts("Enter your answer from A to D \n");
    
        //User input
        answer=getchar();
        answer=getchar();
        switch(answer)
        {
            case 'A':
            case 'a':;
                puts("Nope!");
            puts("Multiple functions will not necessarily effect the code in a bad way");
                break;
            case 'B':
            case 'b':;
                puts("Yes, Correct! ");
                puts("When implemented correctly the C code can have multiple functions.");
                (answer)=1;
                break;
            case 'C':
            case 'c':;
                puts("Nope!");
                puts("Multiple functions could crash the code but,");
                puts("it is not because there is more than one function.");
                break;
            case 'D':
            case 'd':;
                puts("Nope!");
                puts("Just because there are multiple functions in the C program does not mean it will crash the entire PC.");
                break;
            default:
                puts("You responded with an inappropriate number");
        }
        return (answer);
    }
