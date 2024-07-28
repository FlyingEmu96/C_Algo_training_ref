#include <stdio.h>

// Function prototypes
void bubbleSort(int arr[], int n);
void selectionSort(int arr[], int n);
void insertionSort(int arr[], int n);
int linearSearch(int arr[], int n, int key);
int binarySearch(int arr[], int low, int high, int key);
void printArray(int arr[], int n);

int main() {
    // Example array
    int arr[] = {64, 25, 12, 22, 11};
    int n = sizeof(arr)/sizeof(arr[0]);

    // Bubble Sort
    printf("Original array: ");
    printArray(arr, n);
    bubbleSort(arr, n);
    printf("Sorted array using Bubble Sort: ");
    printArray(arr, n);

    // Reset the array
    int arr2[] = {64, 25, 12, 22, 11};
    // Selection Sort
    printf("Original array: ");
    printArray(arr2, n);
    selectionSort(arr2, n);
    printf("Sorted array using Selection Sort: ");
    printArray(arr2, n);

    // Reset the array
    int arr3[] = {64, 25, 12, 22, 11};
    // Insertion Sort
    printf("Original array: ");
    printArray(arr3, n);
    insertionSort(arr3, n);
    printf("Sorted array using Insertion Sort: ");
    printArray(arr3, n);

    // Linear Search
    int key = 22;
    int index = linearSearch(arr3, n, key);
    if (index != -1) {
        printf("Element %d found at index %d using Linear Search.\n", key, index);
    } else {
        printf("Element %d not found using Linear Search.\n", key);
    }

    // Binary Search
    // Binary search requires a sorted array
    key = 22;
    index = binarySearch(arr3, 0, n - 1, key);
    if (index != -1) {
        printf("Element %d found at index %d using Binary Search.\n", key, index);
    } else {
        printf("Element %d not found using Binary Search.\n", key);
    }

    return 0;
}

// Bubble Sort Algorithm
void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                // Swap arr[j] and arr[j+1]
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

// Selection Sort Algorithm
void selectionSort(int arr[], int n) {
    for (int i = 0; i < n-1; i++) {
        // Find the minimum element in unsorted array
        int minIndex = i;
        for (int j = i+1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        // Swap the found minimum element with the first element
        int temp = arr[minIndex];
        arr[minIndex] = arr[i];
        arr[i] = temp;
    }
}

// Insertion Sort Algorithm
void insertionSort(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;
        // Move elements of arr[0..i-1], that are greater than key, to one position ahead of their current position
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

// Linear Search Algorithm
int linearSearch(int arr[], int n, int key) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            return i;
        }
    }
    return -1; // Element not found
}

// Binary Search Algorithm
int binarySearch(int arr[], int low, int high, int key) {
    if (high >= low) {
        int mid = low + (high - low) / 2;
        // Check if the key is present at mid
        if (arr[mid] == key) {
            return mid;
        }
        // If key is smaller than mid, it can only be present in left subarray
        if (arr[mid] > key) {
            return binarySearch(arr, low, mid - 1, key);
        }
        // Else the key can only be present in right subarray
        return binarySearch(arr, mid + 1, high, key);
    }
    return -1; // Element not found
}

// Function to print an array
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
