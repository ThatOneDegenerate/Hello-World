/*
 * CS1111 Lab 2
 * Author: Ian Ranstadler
 * Email: imransta@mtu.edu
 * 9/13/24
 */

//set up program

#include <stdio.h>

int main()
{
	
	int tbs;
	printf("How many textbooks did you buy this semester? \n");//This line asks the user how many textbooks they've bought this semester
	scanf("%d", &tbs);//And saves it as a variable tbs

	
	if ( tbs < 0 )//Here we check if they've entered a number that is less than 0
	{
		printf("That's not an option!\n");//And tell them they can't do that
	}
	else
	{
	switch ( tbs )//If over zero, this command will read the variable and display the corresponding message
	{
		case 0:
			printf("You got away cheap!\n");
		break;
		
		case 1:
			printf("That is a normal amount of textbooks to pay for.\n");
		break;

		 case 2:
                        printf("That is a normal amount of textbooks to pay for.\n");
                break;
			
		case 3:
			printf("That is a normal amount of textbooks to pay for.\n");
				
		break;
			
		case 4:		
			printf("That's pretty expensive!\n");
		break;

		 case 5:
                        printf("That's pretty expensive!\n");
                break;

		 case 6:
                        printf("That's pretty expensive!\n");
                break;

		 case 7:
                        printf("That's pretty expensive!\n");
                break;

		 case 8:
                        printf("That's pretty expensive!\n");
                break;

		 case 9:
                        printf("That's pretty expensive!\n");
                break;

		 case 10:
                        printf("That's pretty expensive!\n");
                break;
	}
	}
}



