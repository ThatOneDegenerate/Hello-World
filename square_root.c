/*
 * CS1111 square_root.c
 * Author: Thad Kustarz, Ian Ranstadler, Claire schultz
 * Email:twkustar@mtu.edu
 * 9/20/2024
 */

//Sets up the program

#include <stdio.h>

int main() {

        //sets up varibles
        double N;
        int i ;
        double x = 10.000;

        //Prints a statement for a user to enter a valueand then
        //takes in the the num and the amount of times to do it
        printf("Give N and i:");
        scanf("%lf %d",&N ,&i);

        // runs a for loop for the amount of times it was given
        // in the varible i and runs threw the program that 
        // amount of times
        for (int j = 0 ; j < i ; j++){

                x = ((x+(N/x))/2);

        }

        // prints out the estimae of the square root value 
        printf("Estimate:%.6lf",x);

        return 0;
}
