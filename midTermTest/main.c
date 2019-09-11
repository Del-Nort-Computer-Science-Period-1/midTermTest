//
//  main.c
//  midTermTest
//
//  Created by Szeto, Colin on 9/4/19.
// Edited by Akash Das

// standard libraries
#include <stdio.h>

// external includes from team headers
#include "devopsGit.h"
#include "structures.h"
#include "devopsIDE.h"
#include "productowners.h"

// protoype for internal functions
void prepareConsole(void);

// entry point for MidTerm
int main(int argc, const char * argv[]) {
    // start with fresh console
    prepareConsole();
    
    devopsGit(); //DevopsGit's question
    structures(); //Structures Question
    devopsIDE(); //dev.ide questions
    productowners(); //product owners question
    return 0;
}

// put logic to prepare console in here
void prepareConsole(void)
{
    printf("\033"); // clear console
}
