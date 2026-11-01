#include <stdio.h>

void reverseSubSegment(int arr[], int n, int start, int end) {
    if (start < 0 || end >= n || start > end) {
        return;
    }
    
    int left = start;
    int right = end;
    while (left < right) {
        int temp = arr[left];
        arr[left] = arr[right];
        arr[right] = temp;
        
        left++;
        right--;
    }
}

int main() {
    int arr[] = {10, 20, 30, 40, 50, 60};
    int n = sizeof(arr) / sizeof(arr[0]);
    int start = 1, end = 4;
    
    reverseSubSegment(arr, n, start, end);
    
    printf("Reversed sub-segment array: [");
    for (int i = 0; i < n; i++) {
        printf("%d", arr[i]);
        if (i < n - 1) printf(", ");
    }
    printf("]\n");
    
    return 0;
}
