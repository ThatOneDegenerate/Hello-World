/*
 * CS1111 survey.c
 * Author: Thad Kustarz, Ian Ranstadler, Claire schultz, Austin Johnson
 * Email:twkustar@mtu.edu, austinjo@mtu.edu, claschul@mtu.edu, imransta@mtu.edu
 * 10/11/2024
 */

//Sets up program
#include <stdio.h>

int main ()
{
        //Declare variables
        int survey[] = {1, 3, 5, 4, 7, 2, 99, 16, 45, 67, 89, 45};
        int sum = 0;
        int i = 0;

        //The for loop adds together all the values of survey
        for (i = 0; i<=11; i++)
        {
                sum = sum + survey[i];
        }

        //The if statement displays only the total value of the survey array
        if ( i = 11 )
        {
                printf("%d\n", sum);
        }
}
