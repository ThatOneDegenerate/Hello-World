/*
 * CS1111 op.c
 * Author: Thad Kustarz, Ian Ranstadler, Claire schultz, Austin Johnson
 * Email:twkustar@mtu.edu, austinjo@mtu.edu, claschul@mtu.edu, imransta@mtu.edu
 * 10/4/2024
 */

//Sets up program
#include <stdio.h>

int main ()
{
        //Declare variables
        int pi;
        int i;
        int a=1;

        //Prompt for a positive integer and store the answer
        printf("Please enter a positive integer: \n");
        scanf("%d", &pi);

        //For loop adds all integers until the last one
        //Adds up most of the answer
        for ( i = 1; i<pi; i++)
        {
                printf("%d+", i);
                a = a+i;
        }

        //Adds the last integer and displays the answer
        if ( i = pi)
        {
                a = a + i -1;
                printf("%d=%d\n", pi, a);
        }

return 0;
}
