#include <stdio.h>

int main() {
    int t, n, x;
    scanf("%d", &t); 
    
    while (t--) {
        scanf("%d %d", &n, &x);  
        if (x >= (n + 1) / 2) {
            printf("YES\n"); 
        } else {
            printf("NO\n");  
        }
    }
    
    return 0;
}
