#include <stdio.h>

// Function to perform Binary Search
int binarySearch(int arr[], int left, int right, int target) {
    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == target) {
            return mid; // Return the index where the target is found
        } else if (arr[mid] < target) {
            left = mid + 1; // Search in the right half
        } else {
            right = mid - 1; // Search in the left half
        }
    }
    return -1; // Return -1 if the target is not found
}

int main() {
    int arr[] = {3, 8, 12, 19, 27, 35, 42, 55, 67};
    int size = sizeof(arr) / sizeof(arr[0]);

    int target;
    printf("Enter the number to search: ");
    scanf("%d", &target);

    int result = binarySearch(arr, 0, size - 1, target);

    if (result != -1) {
        printf("Number %d found at index %d.\n", target, result);
    } else {
        printf("Number not found in the array.\n");
    }

    return 0;
}

