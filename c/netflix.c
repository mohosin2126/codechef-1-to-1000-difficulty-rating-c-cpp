#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    
    while (t--) {
        int a, b, c, x;
        scanf("%d %d %d %d", &a, &b, &c, &x);
        
        if ((a + b >= x) || (a + c >= x) || (b + c >= x)) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }

    return 0;
}
