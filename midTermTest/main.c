//
//  main.c
//  midTermTest
//

// standard libraries
#include <stdio.h>

// external includes from team headers
#include "devopsGit.h"
#include "structures.h"
#include "devopsIDE.h"
#include "productowners.h"
#include "simple.h"
// protoype for internal functions
void prepareConsole(void);

// entry point for MidTerm
int main(int argc, const char * argv[]) {
    // start with fresh console
    int score=0;
    prepareConsole();
    if (simpleio() ==1)
    { //this tests the return value and plays the function
        score++; //if they got it right this adds to the score counter
    }
    if (devopsGit() ==1) {//DevopsGit's question
        score++;
       }
    if (structures() ==1) //Structures Question
    {
        score++;
        }
    if (devopsIDE() ==1) //dev.ide questions
    {
        score++;
        }
    if (productowners() ==1) //product owners question
    {
        score++;
        }
    printf("%d out of 5\n", score);
    printf("%d percent\n",score*100/5 );

    return 0;
}

// put logic to prepare console in here
void prepareConsole(void)
{
    printf("\033"); // clear console
}

//  Edited by Colin on 9/4/19.
//  Edited by Dominick
//  Edited by Sengupta, Dhruv on 9/4/19.
//  Copyright © 2019 Szeto, Colin All rights reserved.
//  Created by Szeto, Colin on 9/4/19.
//  Edited by Maheshwari, Navodit. All rights reserved. :D0
//  Edited by Joseph, here again
//  Edited by Lola Bulkin, here
//  Edited by Nagesh, Shreya
//  Edited by Jaisel agian
//  Edited by Ravula, Neeha
//  Edited by Nick, Taha
//  Edited by Alec
//  Dane Vestal
//  Edited by Tianna
//  Edited by Colin on 9/4/19
//  Edited by Alex T
//  Edited by Mr M
//  Edited by Bella W. (test)
//  Edited by Akash Das
//  Edited by Mason
//  Edited by Michael
//  Edited by Sengupta, Dhruv
//  Edited by Kevin
//  Edited by Gwendolyn Vestal
//  Edited by Kaitlyn
//  Edited by Andrew Joseph
//  Edited by Aidan Ohanian
//  Edited by Henry Blom
//  Edited by Zach Sutherland

