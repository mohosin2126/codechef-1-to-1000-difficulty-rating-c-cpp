#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        int X1, Y1, X2, Y2;
        scanf("%d %d %d %d", &X1, &Y1, &X2, &Y2);
        
        int cost1 = X1 + Y1;
        int cost2 = X2 + Y2;
        
        printf("%d\n", cost1 < cost2 ? cost1 : cost2);
    }
    
    return 0;
}
