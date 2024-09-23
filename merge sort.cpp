#include <stdio.h> 
#include <stdlib.h> 
// Function to merge two halves 
void merge(int arr[], int left, int mid, int right) { 
int n1 = mid - left + 1; 
int n2 = right - mid; 
// Create temporary arrays 
int* L = (int*)malloc(n1 * sizeof(int)); 
int* R = (int*)malloc(n2 * sizeof(int)); 
    // Copy data to temporary arrays L[] and R[] 
    for (int i = 0; i < n1; i++) { 
        L[i] = arr[left + i]; 
    } 
    for (int j = 0; j < n2; j++) { 
        R[j] = arr[mid + 1 + j]; 
    } 
 
    // Merge the temporary arrays back into arr[left..right] 
    int i = 0; // Initial index of the first subarray 
    int j = 0; // Initial index of the second subarray 
    int k = left; // Initial index of the merged subarray 
 
    while (i < n1 && j < n2) { 
        if (L[i] <= R[j]) { 
            arr[k++] = L[i++]; 
        } else { 
            arr[k++] = R[j++]; 
        } 
    } 
 
    // Copy the remaining elements of L[], if any 
    while (i < n1) { 
        arr[k++] = L[i++]; 
    } 
 
    // Copy the remaining elements of R[], if any 
    while (j < n2) { 
        arr[k++] = R[j++]; 
    } 
 
    // Free allocated memory 
    free(L); 
    free(R); 
} 
 
// Function to implement Merge Sort 
void mergeSort(int arr[], int left, int right) { 
    if (left < right) { 
        int mid = left + (right - left) / 2; 
 
        // Recursively sort the first and second halves 
        mergeSort(arr, left, mid); 
        mergeSort(arr, mid + 1, right); 
 
        // Merge the sorted halves 
        merge(arr, left, mid, right); 
    } 
} 
 
// Function to print an array 
void printArray(int arr[], int size) { 
    for (int i = 0; i < size; i++) { 
        printf("%d ", arr[i]); 
    } 
    printf("\n"); 
} 
 
int main() { 
    int arr[] = {12, 11, 13, 5, 6, 7}; 
    int size = sizeof(arr) / sizeof(arr[0]); 
printf("Given array:\n"); 
printArray(arr, size); 
mergeSort(arr, 0, size - 1); 
printf("Sorted array:\n"); 
printArray(arr, size); 
return 0; 
}
