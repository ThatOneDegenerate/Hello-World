/*
 * CS1111 textbooks.c
 * Author: Austin Johnson
 * Email: austinjo@mtu.edu
 * 9/13/24
 */

//set up code
#include <stdio.h>

int main()
{
	//prompt for textbooks and scan for tbs
	int tbs;
	printf("How many textbooks did you buy this semester? \n");
	scanf("%d", &tbs);

	//see if textbooks entered is less than 0
	//then checks how expensive the users textbook purchases where objectively 
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



