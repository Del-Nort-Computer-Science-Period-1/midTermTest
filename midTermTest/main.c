//
//  main.c
//  midTermTest
//
//  Created by DNHS CS P1 on 9/12/19.
//  Copyright © 2019 DNHS CS P1. All rights reserved.

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
