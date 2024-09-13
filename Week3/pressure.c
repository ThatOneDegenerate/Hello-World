/*
 * CS1111 Compare.c
 * Author: Austin Johnson
 * Email: austinjo@mtu.edu
 * 9/13/24
 */

#include <stdio.h>

int main()
{

	//prompt and scan for depth
	float depth;
	printf("How deep is the lake (in meters)? ");
	scanf("%f", &depth);

	//check to see how skilled the diver has to be for certain depths
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
	
	printf("The presure at the deepest point is: %.2f kPa.\n", depth*9.81);

}
