all:output
	output
output: main.c 1_BubbleSort.o 2_SelectionSort.o 3_InsertionSort.o 4_MergeSort.o 5_QuickSort.o 6_HeapSort.o
    gcc -o output main.c 1_BubbleSort.o 2_SelectionSort.o 3_InsertionSort.o 4_MergeSort.o 5_QuickSort.o 6_HeapSort.o

1_BubbleSort.o:src/1_BubbleSort.c
    gcc -c src/1_BubbleSort.c -Wall
    
2_SelectionSort.o:src/2_SelectionSort.c
    gcc -c src/2_SelectionSort.c -Wall

3_InsertionSort.o:src/3_InsertionSort.c
    gcc -c src/3_InsertionSort.c -Wall

4_MergeSort.o:src/4_MergeSort.c
    gcc -c src/4_MergeSort.c -Wall

5_QuickSort.o:src/5_QuickSort.c
	gcc -c src/5_QuickSort.c -Wall

6_HeapSort.o:src/6_HeapSort.c
	gcc -c src/6_HeapSort.c -Wall
