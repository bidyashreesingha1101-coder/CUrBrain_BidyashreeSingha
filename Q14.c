//Threshold Filter:-
#include <stdio.h>
#include <stdlib.h>

int* threshold_filter(const int* sales, int n, int threshold, int* return_size) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (sales[i] >= threshold) {
            count++;
        }
    }
    
    *return_size = count;
    if (count == 0) {
        return NULL;
    }
    
    int* result = (int*)malloc(count * sizeof(int));
    if (!result) return NULL;
    
    int idx = 0;
    for (int i = 0; i < n; i++) {
        if (sales[i] >= threshold) {
            result[idx++] = sales[i];
        }
    }
    
    return result;
}

int main() {
    int sales[] = {150, 80, 200, 90, 300};
    int threshold = 100;
    int return_size = 0;
    
    int* filtered = threshold_filter(sales, 5, threshold, &return_size);
    
    printf("Q14 Output: [");
    for (int i = 0; i < return_size; i++) {
        printf("%d%s", filtered[i], (i == return_size - 1) ? "" : ", ");
    }
    printf("]\n");
    
    free(filtered);
    return 0;
}
