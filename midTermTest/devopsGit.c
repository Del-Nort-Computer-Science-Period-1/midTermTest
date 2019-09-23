//
//  devopsGit.c
//  midTermTest
//
//  Created by Das, Akash on 9/6/19.
//  Copyright © 2019 Szeto, Colin. All rights reserved.
//

#include "devopsGit.h"

int devopsGit(void) {
    int answer=0;
    // Question 1 by devopGit
    int loop = 0;
    while (loop < 1)
    {
    printf("                  \n");
    printf("What is github?\n");
    printf("A. A website that helps with version control\n");
    printf("B. To feed cats octopus\n");
    printf("C. To make your life hard\n");
    printf("D. A website to deconflict error messages and an expanded library of commands\n");
    printf("Choose an answer between A-D\n");
    
    answer=getchar();
    answer=getchar();
    switch(answer)
    {
        case 'A':
        case 'a':;
            printf("Correct.\n");
              loop++;
            answer=1;
            break;
        case 'B':
        case 'b':;
            printf("Incorrect.\n");
              loop++;
            break;
        case 'C':
        case 'c':;
            printf("Incorrect.\n");
              loop++;
            break;
        case 'D':
        case 'd':;
            printf("Incorrect.\n");
              loop++;
            break;
        default:
            printf("Thats not an answer, try again\n");
            break;
    }
    }
    return answer;

}
