/*
 * CS1111 pressure.c
 * Author: Thad Kustarz
 * Email: twkustar@mtu.edu
 * 9/13/24
 */
// Sets up program
#include <stdio.h>

int main()
{

	//reads the number that was entered and uses it for the depth of the lake in meters
	float depth;
	printf("How deep is the lake (in meters)? ");//This line asks for the depth
	scanf("%f", &depth);//This line asks for the depth

	//uses an if statement to run the numbered entered then displays a message based off the number
	if ( depth < 12 )
	{
		printf("You can probably dive in it if you are a beginner.\n");
	}
	else if ( depth > 12 && depth < 30 )
	{
		printf("You can probably dive in it if you are a trained professional.\n");
	}
	else 
	{
		printf("You might want to make preparations before diving.\n");
	}
	// Calculates the pressure at the deepes poin then displays it in a message
	printf("The presure at the deepest point is: %.2f kPa.\n", depth*9.81);

}
