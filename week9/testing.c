/*  CS1111 Lab Week 9
 *
 * Name: Thad Kustarz, Claire Schultz, Austin Johnson, Ian Ranstadler
 * email: imransta@mtu.edu
 * Date: 10/25/2024
 * 
 */

#include<stdio.h>
#include<stdlib.h>

//sorts arrays through bubble sort (sets of 2)
        void bubbleSort(int array[], int size){
//runs through to make sure in order
        for(int j=0; j<=size; j++){
//runs through to check through array
                for (int i=0; i<=size-1; i++){
//switches values if last is less than first
                        if (array[i+1]<array[i]){

                                int arraySub = array[i+1];
                                array[i+1] = array[i];
                                array[i] = arraySub;

                                }
                        }
                }

}
int main()
        {
    // When testing, setting a smaller size will let it run faster.
    int size = 100000;
    // Dynamically allocate array - this isn't fitting on the stack
    int *array = malloc(size * sizeof(int));

    // Scan input.
    for(int i = 0; i < size; i++)
    {
        scanf("%d", array + i);
    }

    // UPDATE THIS LINE
    bubbleSort(array, size);

    // Print output
    for(int i = 0; i < size; i++)
    {
        printf("%d\n", array[i]);
    }

    // Free our dynamically allocated array.
    free(array);

    return 0;
}
