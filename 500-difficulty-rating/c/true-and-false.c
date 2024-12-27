#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);
    while (T--) {
        int N, K;
        scanf("%d %d", &N, &K);
        
        int bob_score = N - K;
        
        printf("%d\n", bob_score);
    } 
    return 0;
}
