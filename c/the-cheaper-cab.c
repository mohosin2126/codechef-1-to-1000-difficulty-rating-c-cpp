#include <stdio.h>

int main() {
    int t, x, y;
    scanf("%d", &t);
    
    while (t--) {
        scanf("%d %d", &x, &y);
        
        if (x < y) {
            printf("FIRST\n");
        } else if (x > y) {
            printf("SECOND\n");
        } else {
            printf("ANY\n");
        }
    }
    
    return 0;
}
