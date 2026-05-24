#include <stdio.h>
int binarySearch(int arr[], int size, int target)
{
    int low = 0;
    int high = size - 1;
    while (low <= high)
    {
        // Use this formula to avoid potential overflow for large indices
        int mid = low + (high - low) / 2;
        if (arr[mid] == target)
            return mid; // Target found
        if (arr[mid] < target)
            low = mid + 1; // Search right half
        else
            high = mid - 1; // Search left half
    }
    return -1; // Target not found
}
int main()
{
    int arr[] = {2, 5, 8, 12, 16, 23, 38, 56, 72, 91};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 23;
    int result = binarySearch(arr, size, target);
    if (result != -1)
        printf("Element found at index: %d\n", result);
    else
        printf("Element not present in array\n");
    return 0;
}
