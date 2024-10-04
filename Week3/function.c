/* CS1111 Week 5 Lab function.c
 *
 * @authors Claire Schultz, Ian Ranstdadler,Austin Johnson, Thad Kustarz
 * @email twkustar@mtu.edu, austinjo@mtu.edu, claschul@mtu.edu, imransta@mtu.edu
 * @date 10/4/2024
*/

#include <stdio.h>

//creates fucntion Star to print out number of stars that is given in the parameters
void Star(int size){

//For loop that runs through the number of times given in the parameters and prints that many stars
        for (int i = 0; i <= size; i++){

                printf("*");
        }
//Prints line break
        printf ("\n");
}


int main(){
//Initilizing variable
        int posInt = 0;

//prints and scans for position integer (# of star lines)
        printf("Please enter a position integer: ");
        scanf("%d", &posInt); 

//for loop that runs the fuction the number of times for scanned position integer
        for (int j = 0; j < posInt; j++){
                
                Star(j);
        }
        return 0; 
}
