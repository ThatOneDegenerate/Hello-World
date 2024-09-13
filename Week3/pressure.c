/*
 * CS1111 Lab 2
 * Author: Ian Ranstadler
 * Email: imransta@mtu.edu
 * 9/13/24
 */

#include <stdio.h>

int main()
{

	
	float depth;
	printf("How deep is the lake (in meters)? ");//This line asks for the deepest part of the lake
	scanf("%f", &depth);//This part reads and saves the depth to a variable

	if ( depth < 12 )//Checks if the depth is under 12 meters
	{
		printf("You can probably dive in it if you are a beginner.\n");
	}
	else if ( depth > 12 && depth < 30 )//If over 12 meters, this line checks if the depth is under 30 meters
	{
		printf("You can probably dive in it if you are a trained professional.\n");
	}
	else //and if its over 30 then it displays the message below
	{
		printf("You might want to make preparations before diving.\n");
	}

	printf("The presure at the deepest point is: %.2f kPa.\n", depth*9.81);//And finally it calculates and gives the user the pressure at the depth recorded

}
