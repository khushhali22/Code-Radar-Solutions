#include <stdio.h>
int main() {
    int m;
    scanf("%d",&m);
    int arr[m];
    for(int i=0 ; i<m ; i++){
        scanf("%d",&arr[i]);
    }
    int n = sizeof(arr) / sizeof(arr[0]);

    // Traverse the array
    for (int i = 0; i < m - 1; i++) {
        int max = arr[i + 1]; // Assume next element is the max
        
        // Find the max element to the right of arr[i]
        for (int j = i + 1; j < m; j++) {
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
