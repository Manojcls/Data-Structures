#include <stdio.h>

#define MAX_SIZE 100

// Function to insert an element at a given position in the array
void insertElement(int arr[], int *size, int pos, int value) {
    if (*size >= MAX_SIZE) {
        printf("Array is full. Cannot insert.\n");
        return;
    }

    if (pos < 0 || pos > *size) {
        printf("Invalid position. Cannot insert.\n");
        return;
    }

    for (int i = *size - 1; i >= pos; i--) {
        arr[i + 1] = arr[i]; // Shift elements to the right
    }

    arr[pos] = value;
    (*size)++;
}

// Function to delete an element at a given position in the array
void deleteElement(int arr[], int *size, int pos) {
    if (*size == 0) {
        printf("Array is empty. Cannot delete.\n");
        return;
    }

    if (pos < 0 || pos >= *size) {
        printf("Invalid position. Cannot delete.\n");
        return;
    }

    for (int i = pos; i < *size - 1; i++) {
        arr[i] = arr[i + 1]; // Shift elements to the left
    }

    (*size)--;
}

// Function to display the elements of the array
void displayArray(int arr[], int size) {
    if (size == 0) {
        printf("Array is empty.\n");
        return;
    }

    printf("Array elements: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[MAX_SIZE];
    int size = 0, choice, pos, value;

    while (1) {
        printf("\nArray Operations:\n");
        printf("1. Insert an element\n");
        printf("2. Delete an element\n");
        printf("3. Display the array\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter the position and value to insert: ");
                scanf("%d %d", &pos, &value);
                insertElement(arr, &size, pos, value);
                break;
            case 2:
                printf("Enter the position to delete: ");
                scanf("%d", &pos);
                deleteElement(arr, &size, pos);
                break;
            case 3:
                displayArray(arr, size);
                break;
            case 4:
                printf("Exiting the program.\n");
                return 0;
            default:
                printf("Invalid choice. Try again.\n");
        }
    }

    return 0;
}

