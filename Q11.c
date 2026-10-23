//Modular Addition in C programming language:-
#include <stdio.h>

long long arraySumModular(int arr[], int n) {
    long long MOD = 1000000007;
    long long result = 0;
    
    for (int i = 0; i < n; i++) {
        result = (result + arr[i]) % MOD;
    }
    return result;
}

int main() {
    int case1[] = {1000000000, 1000000000, 1000000000};
    int case2[] = {1, 2, 3, 4};
    int case3[] = {};
    int case4[] = {1000000007};
    int case5[] = {0, 0, 0};

    printf("Test 1: %lld\n", arraySumModular(case1, 3)); 
    printf("Test 2: %lld\n", arraySumModular(case2, 4)); 
    printf("Test 3: %lld\n", arraySumModular(case3, 0));
    printf("Test 4: %lld\n", arraySumModular(case4, 1)); 
    printf("Test 5: %lld\n", arraySumModular(case5, 3)); 
    
    return 0;
}
