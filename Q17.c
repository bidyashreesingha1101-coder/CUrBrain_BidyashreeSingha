#include <stdio.h>
#include <stdlib.h>
int compare(const void *a, const void *b) {
    int int_a = *((int *)a);
    int int_b = *((int *)b);
    if (int_a < int_b) return -1;
    if (int_a > int_b) return 1;
    return 0;
}

int mostPopularItem(int sales[], int n) {
    if (n <= 0) return -1;
    qsort(sales, n, sizeof(int), compare);
    
    int max_freq = 0;
    int best_id = sales[0];
    
    int current_id = sales[0];
    int current_freq = 1;
    
    for (int i = 1; i < n; i++) {
        if (sales[i] == current_id) {
            current_freq++;
        } else {
            if (current_freq > max_freq) {
                max_freq = current_freq;
                best_id = current_id;
            }
            current_id = sales[i];
            current_freq = 1;
        }
    }
    if (current_freq > max_freq) {
        max_freq = current_freq;
        best_id = current_id;
    }
    
    return best_id;
}

int main() {
    int sales[] = {101, 103, 101, 102, 103, 105, 101, 103};
    int n = sizeof(sales) / sizeof(sales[0]);
    
    int result = mostPopularItem(sales, n);
    printf("Most Popular Item: %d\n", result);
    return 0;
}
