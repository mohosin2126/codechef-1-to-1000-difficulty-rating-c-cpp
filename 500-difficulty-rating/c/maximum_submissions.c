#include <stdio.h>

int main() {
    int T, X;
    scanf("%d", &T);
    
    while (T--) {
        scanf("%d", &X);
        
        int total_seconds = X * 60;
        int effective_seconds = total_seconds - 5;
        int max_submissions = effective_seconds / 30;
        
        if (effective_seconds % 30 > 0) {
            max_submissions++;
        }
        
        printf("%d\n", max_submissions);
    }
    
    return 0;
}
