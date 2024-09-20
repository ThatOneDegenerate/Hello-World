/* CS1111 Week 4 Lab sequencing.c
 *
 * @authors Claire Schultz, Ian Ranstdadler,Austin Johnson, Thad Kustarz
 * @email claschul@mtu.edu
 * @date 9/20/2024
*/
        #include <stdio.h>
        int main()
{
//Initializing Variables
        int a = 0;
        int b = 0;
        int n = 0;
        int num = 0;

//Printing ask  and scanning a b and n values 
        printf("Give a, b, and n: ");
        scanf("%d %d %d", &a, &b, &n);

//printing first two values and subtracting 2 from teh total number of values
        printf("%d %d ", a, b);
        n = n-2;

//While loop to calculate the last two values to find the next value and printing the new value 
        while (n>0){
                num  = a+b;
                a = b;
                b = num;
                printf("%d ", num);
                n=n-1;Thad Kustarz
        }

//printing new line
        printf("\n");

return 0;
}

~    
