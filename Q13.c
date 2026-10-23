//Prefix Modulo:-
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

bool hasDivisiblePrefix(int arr[], int n, int k) {
    if (n == 0) {
        return false;
    }
    long long divisor = abs(k);
    long long running_sum = 0;
    
    for (int i = 0; i < n; i++) {
        running_sum += arr[i];
        if (running_sum % divisor == 0) {
            return true;
        }
    }
    return false;
}

int main() {
    int case1[] = {4, 2, 9};
    int case2[] = {1, 2, 4};
    int case3[] = {5};
    int case4[] = {0, 1};
    int case5[] = {-2, 2, 1};

    printf("Test 1: %s\n", hasDivisiblePrefix(case1, 3, 3) ? "True" : "False"); 
    printf("Test 2: %s\n", hasDivisiblePrefix(case2, 3, 5) ? "True" : "False");
    printf("Test 3: %s\n", hasDivisiblePrefix(case3, 1, 5) ? "True" : "False");
    printf("Test 4: %s\n", hasDivisiblePrefix(case4, 2, 7) ? "True" : "False");
    printf("Test 5: %s\n", hasDivisiblePrefix(case5, 3, 3) ? "True" : "False"); 
    
    return 0;
}
