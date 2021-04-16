#include <stdio.h>

/**
 * @brief : sorts the input array using selection sort
 * 
 * @param arr : input array 
 * @param n : size of input array
 */

void selectionSort(int arr[], int n) 
{ 
  
    for (int i = 0; i < n-1; i++) 
    { 
        int min_idx = i; 
        for (int j = i+1; j < n; j++) 
        if (arr[j] < arr[min_idx]) 
            min_idx = j; 

        swap(&arr[min_idx], &arr[i]); 
    } 
} 
  