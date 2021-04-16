#include<stdio.h>

/**
 * @brief : picks the pivot as last element and places it at its right location.
 * 
 * @param arr : input array
 * @param low : lower bound of the array
 * @param high : upper bound of the array
 * @return int : returns the index of partitioned array
 */
int partition (int arr[], int low, int high)
{
    int pivot = arr[high]; 
    int i = (low - 1);
 
    for (int j = low; j <= high - 1; j++)
    {
        if (arr[j] < pivot)
        {
            i++; 
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]);
    return (i + 1);
}
 /**
  * @brief : function that implements quick sort
  * 
  * @param arr : input array 
  * @param low : lower bound of array
  * @param high : upper bound of array
  */

void quickSort(int arr[], int low, int high)
{
    if (low < high)
    {
        int pi = partition(arr, low, high);
 
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}