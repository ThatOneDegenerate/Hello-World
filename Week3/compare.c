/*
 * CS1111 Compare.c
 * Author: Thad Kustarz
 * Email: twkustar@mtu.edu
 * 9/13/24
 */

#include <stdio.h>
//sets up the progam  

int main()

{
	// Asks for two numbers to be entered then it reads the two numbers that were entered.
	float num1, num2;

	
	printf("Enter two numbers: \n");
	scanf("%f%f", &num1, &num2);

	// Checks to see if the numbers are equal or not equal then displays yes or no based off the statement
	if ( num1 == num2 )
	{ 
		printf("Are the numbers equal? Yes \nAre the numbers not equal? No\n");
	}
	else
	{
		printf("Are the numbers equal? No \nAre the numbers not equal? Yes\n");
	
	}


	//checks to see what number is bigger or smaller then it displays yes or no to answer the questions

	  if ( num1 > num2 && num1 != num2)
        {
                printf("Is the first number less than the second? No\nIs the first number greater than the second? Yes\nIs the first number less than or equal to the second? No\nIs the first number greater than or equal to the second? Yes\n");
        }
        else if ( num1 < num2 && num1 != num2)
                {
                        printf("Is the first number less than the second? Yes\nIs the first number greater than the second? No\nIs the first number less than or equal to the second? Yes\nIs the first number greater than or equal to the second? No\n");
                }

        else if ( num1 == num2 )
                {
                        printf("Is the first number less than the second? No\nIs the first number greater than the second? No\nIs the first number less than or equal to the second? Yes\nIs the first number greater than or equal to the second? Yes\n");
                }
}

