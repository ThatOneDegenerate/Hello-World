/*
 * CS1111 insertionsort.c
 * Author: Thad Kustarz, Ian Ranstadler, Claire schultz, Austin Johnson
 * Email:twkustar@mtu.edu, austinjo@mtu.edu, claschul@mtu.edu, imransta@mtu.edu
 * 10/25/2024
 */


//sets up program
#include <stdio.h>

void insertionSort(int array[], int size);{
        for(int i = 0; i < size; i++ ){
        int sort = array[i];
        int j = i-1;
        
        while (j>=0  && array[j]
