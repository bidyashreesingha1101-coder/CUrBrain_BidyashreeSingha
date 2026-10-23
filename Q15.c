//Minimum Absolute Value:-
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int min_absolute_value(const int* arr, int n) {
    if (n <= 0) return 0;
    
    int best_val = arr[0];
    int min_abs = abs(arr[0]);
    
    for (int i = 1; i < n; i++) {
        int current_abs = abs(arr[i]);
        if (current_abs < min_abs) {
            min_abs = current_abs;
            best_val = arr[i];
        }
    }
    
    return best_val;
}

int main() {
    int arr[] = {10, -5, -2, 4, 2};
    int result = min_absolute_value(arr, 5);
    
    printf("Q15 Output: %d\n", result); 
    return 0;
}
