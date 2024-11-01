/*Lab Week 10
 *
 * name: Ian Ranstadler, Austin Johnson, Thad Kustarz, Claire Schultz
 * date: 11/01/2024
 * email: imransta@mtu.edu
 *
 */

#include<stdio.h>
void swap(int *a, int *b);

int main(){
    int a;
    int b;

    a = 1; b = 2;

    printf("a = %d, b = %d\n", a, b);
    swap(&a,&b); // Call your swap function here.

    printf("a = %d, b = %d\n", a, b);
}

void swap(int *a, int *b){
        int tmp;

        tmp = *a;
        *a = *b;
        *b = tmp;
}
