/*
 * CS1111 arraymax.c
 * Author: Thad Kustarz, Ian Ranstadler, Claire schultz, Austin Johnson
 * Email:twkustar@mtu.edu, austinjo@mtu.edu, claschul@mtu.edu, imransta@mtu.edu
 * 10/11/2024
 */

//Sets up program
#include <stdio.h>

//States a function that runs through all of the inputs of an array and outputs the highest value in the array
int maxValue(int x[], int num)
{
        int lg = x[0];

        for (int i = 0; i<num; i++)
        {
                if (lg>x[i])
                {
                        lg = lg;
                }
                else
                {
                        lg = x[i];
                }
        }
        return lg;
}

int main()
{
        //Declare/initialize the arrays
        int a[6]={1,4,5,10,8,9};
        int b[8]={4,5,60,5,1,100,8,10};

        //Output the max value in the arrays
        printf("max in array a is %d \n", maxValue(a, 6));
        printf("max in array b is %d \n", maxValue(b, 8));


}
