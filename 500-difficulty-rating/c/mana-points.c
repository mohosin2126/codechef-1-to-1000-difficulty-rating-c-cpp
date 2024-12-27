#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    
    while (t--) {
        int x, y;
        scanf("%d %d", &x, &y);
        
        int max_attacks = y / x;
        
        printf("%d\n", max_attacks);
    }
    
    return 0;
}