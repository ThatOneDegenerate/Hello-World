/*
 * CS1111 Compare.c
 * Author: Thad Kustarz
 * Email: twkustar@mtu.edu
 * 9/13/24
 */

#include <stdio.h>


int main()

{
	//variables
	float num1, num2;

	//prompt and scan for 2 numbers
	printf("Enter two numbers: \n");
	scanf("%f%f", &num1, &num2);

	//see if the numbers are equal
	if ( num1 == num2 )
	{ 
		printf("Are the numbers equal? Yes \nAre the numbers not equal? No\n");
	}
	else
	{
		printf("Are the numbers equal? No \nAre the numbers not equal? Yes\n");
	
	}


	//check for inequalities with the numbers
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

