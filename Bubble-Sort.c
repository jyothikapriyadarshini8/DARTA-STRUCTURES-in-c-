#include <stdio.h>
#include <stdbool.h>
// Function to perform Bubble Sort
void bubbleSort(int arr[], int n)
{
    int i, j, temp;
    bool swapped;
    
    // Outer loop for each pass
    for (i = 0; i < n - 1; i++)
    {
        swapped = false;
        // Inner loop for adjacent comparisons
        // (n-i-1) because the last i elements are already sorted
        for (j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                // Swap elements
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swapped = true;
            }
        }
        // If no two elements were swapped, array is sorted
        if (!swapped)
            break;
    }
}
// Function to print the array
void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

int main()
{
    int data[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(data) / sizeof(data[0]);
    printf("Original array: \n");
    printArray(data, n);
    bubbleSort(data, n);
    printf("Sorted array in ascending order: \n");
    printArray(data, n);
    return 0;
}
