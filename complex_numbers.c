/* CS1111 Lab 3
 *
 * @name: Ian Ranstadler, Claire Schultz, Thadeus Kustarz
 * @email: imransta@mtu.edu
 * @date: 09/20/2024
 */

#include <stdio.h>

int main()
{

        int x;
        int y;
        int i = 0;//creates a counter

        printf("Please enter two numbers:");//Asks for two numbers
        scanf("%d %d", &x, &y);//applies those two numbers to the intergers for x and y

        int z = 0;//This will record the answer for multiplication

        while(y>i)//checks if y is equal to the counter
        {
                z = z + x;      //sets z equal to the sum of z and x
                i = i + 1;      //increases the counter by 1
        }

        int w = x;//records the answer to division as equal to x
        int j = 0;//creates a counter

        while(w>=y)//checks if w is greater than or equal to y
        {
                w = w - y;//Sets w equal to w minus y
                j = j + 1;//increases counter by one
        }

        printf("%d*%d=%d\n", x, y, z);//gives you the answer to the multiplication as equal to recorded z int
        printf("%d/%d=%d\n", x, y, j);//gives answer to divsion as equal to counter j
}
