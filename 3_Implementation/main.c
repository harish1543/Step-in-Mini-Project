#include<stdio.h>
#include<stdlib.h>

void bubbleSort(int a[],int n);
void selectionSort(int arr[], int n);
void insertionSort(int arr[], int n);
void mergeSort(int arr[],int l,int r);
void quickSort(int arr[], int low, int high);
void heapSort(int arr[], int n);
int ArraySize;
int InputArray[1000];
int main()
{
    int choice,choice2;
    while(1)
    {
        printf("Enter Size of array: ");
        scanf("%d",&ArraySize);
        for(int i=0;i<ArraySize ;i++)
        {
            scanf("%d",InputArray[i]);
        }
        start:
        printf("\nChoose The Sorting Algorithm:\n1. Bubble Sort \n2. Selection Sort \n3. Insertion Sort \n4. Merge Sort \n5. Quick Sort \n6. Heap Sort");
        printf("\n Enter choice: ");
        scanf("%d", &choice);
        switch(choice)
        {
            case 1:
            bubbleSort(InputArray, ArraySize);
            break;
            case 2:
            selectionSort(InputArray, ArraySize);
            break;
            case 3:
            insertionSort(InputArray, ArraySize);
            break;
            case 4:
            mergeSort(InputArray, 0, ArraySize);
            break;
            case 5:
            quickSort(InputArray, 0, ArraySize);
            break;
            case 6:
            heapSort(InputArray, ArraySize);
            break;
            default:
            printf("invalid choice");
            goto start;
            break;
        }
        for(int i=0;i<ArraySize ;i++)
        {
            printf("%d",InputArray[i]);
        }
        printf("\n1. Repeat the Process \n2. exit");
        scanf("%d",&choice2);
        if(choice2==2)
        {
            break;
        }
        }
return 0;
}