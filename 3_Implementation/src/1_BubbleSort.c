#include <stdio.h>
/**
 * @brief : swap the value passed as arguments
 * 
 * @param xp : first value
 * @param yp : second value
 */
void swap(int *xp, int *yp) 
{ 
    int temp = *xp; 
    *xp = *yp; 
    *yp = temp; 
} 

/**
 * @brief : sorts the given data usinh bubble sort
 * 
 * @param arr : takes the array as an input 
 * @param n : size of the input array
 */

void bubbleSort(int arr[], int n) 
{ 
    /**
     * @brief : compares each elemments with every elements next to it and swaps if they are in wrong order
     * 
     */
    for (int i = 0; i < n-1; i++)     
    for (int j = 0; j < n-i-1; j++) 
        if (arr[j] > arr[j+1]) 
            swap(&arr[j], &arr[j+1]); 

} 