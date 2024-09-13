/*
 * CS1111 textbooks.c
 * Author: Thad Kustarz
 * Email: twkustar@mtu.edu
 * 9/13/24
 */

//set up program

#include <stdio.h>

int main()
{
	// reads the number enetered and stores it as tbs variable
	int tbs;
	printf("How many textbooks did you buy this semester? \n");
	scanf("%d", &tbs);

	  //see if number enetered was less than zero 
        //then checks the amount that was enetered then displays a comment based off of number enetered
	
	if ( tbs < 0 )
	{
		printf("That's not an option!\n");
	}
	else
	{
	switch ( tbs )
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



