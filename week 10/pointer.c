/*
 * CS1111 pointer.c
 * Author: Thad Kustarz, Ian Ranstadler, Claire schultz, Austin Johnson
 * Email:twkustar@mtu.edu, austinjo@mtu.edu, claschul@mtu.edu, imransta@mtu.edu
 * 11/1/2024
 */

#include <stdio.h>

int main()
{
//Initilizies variables
    int num = 5;
    double rate = 5.4;
    char letter = 'B';

//Initilizies pointers, sets the equal to variables
    int *numP = &num;
    double *rateP = &rate;
    char *letterP = &letter;

//Increases variables by 1
    *numP = *numP+1;
    *rateP = *rateP+1;
    *letterP = *letterP+1;

//Prints out the variable value and the address
    printf("%d    %p\n", *numP ,numP);
    printf("%.1f  %p\n", *rateP, rateP);
    printf("%c    %p\n", *letterP, letterP);

return 0;
}
