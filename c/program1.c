#include <stdio.h>

int linearSearch(int arr[], int length, int target) {
    for (int i = 0; i < length; i++) {
        if (arr[i] == target) {
            return i;
        }
    }
    return -1;
}

int binarySearch(int arr[], int left, int right, int key) {
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] == key) {
            return mid;
        }
        if (arr[mid] < key) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    return -1;  // Must be outside the while loop
}

int main() {
    int arr[] = {10, 20, 30, 40, 50, 60, 70};
    int size = sizeof(arr) / sizeof(arr[0]);  // Correct size calculation
    int key, choice;

    // Ask for choice BEFORE key (choice must be declared first)
    printf("elements are arr[10,20,30,40,50,60,70]\nChoose search method:\n1. Linear Search\n2. Binary Search\n");
    scanf("%d", &choice);

    printf("Enter the element to search: ");
    scanf("%d", &key);

    int result;
    if (choice == 1) {
        result = linearSearch(arr, size, key);
    } else if (choice == 2) {
        result = binarySearch(arr, 0, size - 1, key);  // size-1 for last index
    } else {
        printf("Invalid choice!\n");
        return 1;
    }

    if (result != -1) {  // != not "i ="
        printf("Element found at index %d\n", result);
    } else {
        printf("Element not found\n");
    }

    return 0;
}