//Modulo Power:- (Avoiding overflow)
#include <stdio.h>

long long moduloPower(long long base, long long power, long long MOD) {
    long long result = 1 % MOD;
    
    for (long long i = 0; i < power; i++) {
        result = (result * base) % MOD;
    }
    return result;
}

int main() {
    printf("Test 1: %lld\n", moduloPower(2, 10, 1000)); 
    printf("Test 2: %lld\n", moduloPower(7, 0, 13));  
    printf("Test 3: %lld\n", moduloPower(9, 1, 7)); 
    printf("Test 4: %lld\n", moduloPower(3, 4, 1)); 
    printf("Test 5: %lld\n", moduloPower(0, 5, 11)); 
    
    return 0;
}
