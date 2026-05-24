#include <stdio.h>
/**
 * Performs a linear search on an array.
 * Returns the index if the target is found, otherwise -1.
 */
int linearSearch(int arr[], int size, int target)
{
    for (int i = 0; i < size; i++) 
    {
        if (arr[i] == target)
        {
            return i; // Target found at index i
        }
    }
    return -1; // Target not found
}
int main() 
{
    int data[] = {10, 25, 4, 18, 7};
    int n = sizeof(data) / sizeof(data[0]);
    int key = 18;
    int result = linearSearch(data, n, key);

    if (result != -1)
    {
        printf("Element %d found at index %d\n", key, result);
    } else
    {
        printf("Element %d not found in the array\n", key);
    }
    return 0;
}
