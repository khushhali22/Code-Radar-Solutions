#include <stdio.h>

int main() {
    int arr[] = {16, 17, 4, 3, 5, 2};
    int n = sizeof(arr) / sizeof(arr[0]);

    // Traverse the array
    for (int i = 0; i < n - 1; i++) {
        int max = arr[i + 1]; // Assume next element is the max
        
        // Find the max element to the right of arr[i]
        for (int j = i + 2; j < n; j++) {
            if (arr[j] > max) {
                max = arr[j];
            }
        }
        
        arr[i] = max; // Replace current element with max found
    }

    arr[n - 1] = -1; // Last element should be -1

    // Print modified array
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
