//
//  main.c
//  midTermTest
//
//  Created by Szeto, Colin on 9/4/19.
//  Copyright © 2019 Szeto, Colin. All rights reserved.
//

#include <ctype.h>
#include <stdio.h>
#include <string.h>
    
    int main(int argc, const char * argv[]) {
        
        
        char answer;
        
        char correctanswer = 'b';
        
        // Print out the user options
        printf("What does the + operator do in C?\n");
        printf("A: Subtracts two operands\n");
        printf("B: Adds two operands\n");
        printf("C: Divides two operands\n");
        printf("D: Multiplies two operands\n");
        scanf("%c", &answer);
        if (tolower(answer) == correctanswer) {
            printf("CORRECT\n");
            
        } else {
            printf("Sorry, wrong answer\n");
        }
        return 0;
    }

    //akash was here
    //colin was here
    //Mr M was here, here again
    //joseph was here
    //akash was here again
    //mason was here

