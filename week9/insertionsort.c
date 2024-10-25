/*
 * CS1111 insertionsort.c
 * Author: Thad Kustarz, Ian Ranstadler, Claire schultz, Austin Johnson
 * Email:twkustar@mtu.edu, austinjo@mtu.edu, claschul@mtu.edu, imransta@mtu.edu
 * 10/25/2024
 */




//Sets up program
#include <math.h>
#include <stdio.h>

//Function to sort the values of an array into increasing order
void insertionSort(int array[], int size)
{

    // Starting from the second element
    for (int i = 1; i < size; i++)
    {
        int key = array[i];
        int j = i - 1;


    //Shifts array one to the right
        while (j >= 0 && array[j] > key)
        {
            array[j + 1] = array[j];
            j = j - 1;
        }

    //Move the key to its correct position
        array[j + 1] = key;
    }
}


int main()
{
        //Declares variables
        int array[] = {7, 4, 9, 2};

        //Runs sorting function
        int size = sizeof(array) / sizeof(array[0]);


        printf("Array: ");
        for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    // Calling insertion sort on array arr
    insertionSort(array, size);

    printf("Sorted array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}

