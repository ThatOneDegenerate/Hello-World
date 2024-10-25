/* CS1111 Week 9 Lab bubblesort.c
 *
 * @authors Claire Schultz, Ian Ranstdadler,Austin Johnson, Thad Kustarz
 * @email twkustar@mtu.edu, austinjo@mtu.edu, claschul@mtu.edu, imransta@mtu.edu
 * @date 10/25/2024
*/
        #include <stdio.h>
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
//prints out array
        for(int k=0; k<=size; k++){

                printf("%d ", array[k]);
        }

}
