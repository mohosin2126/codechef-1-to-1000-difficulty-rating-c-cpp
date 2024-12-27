#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    
    while (t--) {
        int c, x, y;
        scanf("%d %d %d", &c, &x, &y);
        
        int chocolates_needed = c - x;
        if (chocolates_needed > 0) {
            printf("%d\n", chocolates_needed * y);
        } else {
            printf("0\n");
        }
    }

    return 0;
}
