//
//  controlflowops.c
//  midTermTest
//
//  Created by Li, Joseph on 9/10/19.
//  Copyright © 2019 Szeto, Colin. All rights reserved.
//

#include "controlflowops.h"

int controlflowoperatorsAskQuestion(void) {
    
    {
        {
            int answer;
            puts("Do...while loops test the condition at");
            puts("A. The beginning of the loop body");
            puts("B. The end of the loop body");
            puts("C. Never");
            puts("D. Both A and B. \n");
            
            puts("Enter your answer from A to D \n");
            answer = getchar();
            switch(answer)
            {
                case 'b': puts("Good job, you are coorect,");
                    break;
                case 'a': puts("Sorry, you are incorrect");
                    break;
                case 'c': puts("Sorry, you are incorrect");
                    break;
                case 'd': puts("Sorry, you are incorrect");
                    break;
                default:
                    puts("You responded with an inappropriate answer");
            }
            return 0;
        }
    }
}
