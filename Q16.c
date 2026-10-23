//Second Highest Unique Score:-
#include <stdio.h>
#include <stdbool.h>

int second_highest_score(const int* scores, int n) {
    int highest = -1;
    int second_highest = -1;
    bool has_highest = false;
    bool has_second = false;
    
    for (int i = 0; i < n; i++) {
        int score = scores[i];
        
        if (!has_highest || score > highest) {
            second_highest = highest;
            has_second = has_highest;
            highest = score;
            has_highest = true;
        } else if (score < highest && (!has_second || score > second_highest)) {
            second_highest = score;
            has_second = true;
        }
    }
    
    return has_second ? second_highest : -1;
}

int main() {
    int scores[] = {50, 40, 50, 30};
    int result = second_highest_score(scores, 4);
    
    printf("Q16 Output: %d\n", result); 
    return 0;
}
