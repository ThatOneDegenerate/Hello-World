/* CS1111 Week 4 Lab doublemoney.c
 *
 * @authors Claire Schultz, Ian Ranstdadler,Austin Johnson, Thad Kustarz
 * @email claschul@mtu.edu
 * @date 9/20/2024
*/
        #include <stdio.h>
        int main()
{
//Initializing Variables
        float rate = 0;
        int years = 0;

//Printing ask and scanning rate
        printf("What is the yearly return rate in percentage? ");
        scanf("%f", &rate);

//Calculating years using 72 rule 
        years = 72/rate +1;

//Printing rate and years
        printf("With a return rate of %.2f %, it will take %d years to double my money.", rate, years);

        return 0;
}

