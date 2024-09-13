/*
 * CS1111 Lab 2
 * Author: Ian Ranstadler
 * Email: imransta@mtu.edu
 * 9/13/24
 */

#include <stdio.h> 

int main()

{
	
	float num1, num2;

	
	printf("Enter two numbers: \n");//Asks for two numbers from user
	scanf("%f%f", &num1, &num2);//Reads and saves those two variables

	if ( num1 == num2 )//Checks if the two numbers are equal
	{ 
		printf("Are the numbers equal? Yes \nAre the numbers not equal? No\n");//If they are, this message is displayed
	}
	else
	{
		printf("Are the numbers equal? No \nAre the numbers not equal? Yes\n");//If not, this message is displayed
	
	}


	
	  if ( num1 > num2 && num1 != num2)//Checks if the first number is greater than or equal to the second number
        {
                printf("Is the first number less than the second? No\nIs the first number greater than the second? Yes\nIs the first number less than or equal to the second? No\nIs the first number greater than or equal to the second? Yes\n");
        }
        else if ( num1 < num2 && num1 != num2)//Checks if the first number is less than or equal to the second number 
                {
                        printf("Is the first number less than the second? Yes\nIs the first number greater than the second? No\nIs the first number less than or equal to the second? Yes\nIs the first number greater than or equal to the second? No\n");
                }

        else if ( num1 == num2 )//If the previous two statements are not true then it just checks if they are equal again
                {
                        printf("Is the first number less than the second? No\nIs the first number greater than the second? No\nIs the first number less than or equal to the second? Yes\nIs the first number greater than or equal to the second? Yes\n");
                }
}

