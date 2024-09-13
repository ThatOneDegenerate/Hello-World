/*
 * CS1111 Compare.c
 * Author: Ian Ranstadler
 * Email: imransta@mtu.edu
 * 9/13/24
 */

#include <stdio.h>

int main()
{

	//prompt and scan for depth
	float depth;
	printf("How deep is the lake (in meters)? ");//This line asks for the depth
	scanf("%f", &depth);//This line asks for the depth

	//check to see how skilled the diver has to be for certain depths
	if ( depth < 12 )//This if statement checks if the number entered is less than 12 meters
	{
		printf("You can probably dive in it if you are a beginner.\n");//and prints the corresponding message
	}
	else if ( depth > 12 && depth < 30 )//If it is deeper than 12 then it will chack if it is less than 30 meters
	{
		printf("You can probably dive in it if you are a trained professional.\n");//And print the corresponding message
	}
	else //And if it's deeper than 30 meters
	{
		printf("You might want to make preparations before diving.\n");//It will print this message.
	}
	
	printf("The presure at the deepest point is: %.2f kPa.\n", depth*9.81);//And then using the input, it will compute the presure and read it back to the user

}
