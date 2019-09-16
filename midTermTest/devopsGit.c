//
//  devopsGit.c
//  midTermTest
//
//  Created by Das, Akash on 9/6/19.
//  Copyright © 2019 Szeto, Colin. All rights reserved.
//

#include "devopsGit.h"

int devopsGit(void) {
    int answer;
    // Question 1 by devopGit
    printf("                  \n");
    printf("What is github?\n");
    printf("A. A website that helps with version control\n");
    printf("B. To feed cats octopus\n");
    printf("C. To make your life hard\n");
    printf("D. A website to deconflict error messages and an expanded library of commands\n");
    printf("Choose an answer between A-D\n");
    
    while( (answer=getchar() != '\n') && answer != EOF);
    switch(answer)
    {
        case 'A':
        case 'a':
            printf("Correct.\n");
            break;
        case 'B':
        case 'b':
            printf("Incorrect.\n");
            break;
        case 'C':
        case 'c':
            printf("Incorrect.\n");
            break;
        case 'D':
        case 'd':
            printf("Incorrect.\n");
            break;
    }
    return 0;

}
