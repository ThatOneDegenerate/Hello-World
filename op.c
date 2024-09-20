/*
 * CS1111 op.c
 * Author: Thad Kustarz, Ian Ranstadler, Claire schultz
 * Email:twkustar@mtu.edu
 * 9/20/2024
 */

//Sets up the program

#include <stdio.h>

int main() {

        //set up variable 
        char opper;

        // Displays statement for person to eneter an opperaton then it reads what is inputed
        printf("Please enter an op:");
        scanf("%c",&opper);


        // runs a switch case to check to see what was inputed then displays value afterwards
        switch(opper) {
                case '+':
                        printf("Addition\n");
                break;
                case '-':
                        printf("Subtraction\n");
                break;
                case '*':
                        printf("Multiplication\n");
                break;
                case '/':
                        printf("Division\n");
                break;
                case '%':
                        printf("Modulo\n");
                break;
                case '>':
                        printf("Greater than\n");
                break;
                case '<':
                        printf("Less than\n");
                break;
                case '!':
                        printf("Not\n");
                break;
                default:
                        printf("unknown\n");
                break;
        }
        return 0;
}
