#include <stdio.h>

int main() {
    int T, X, Y;
    scanf("%d", &T);
    
    while (T--) {
        scanf("%d %d", &X, &Y);
        int cost_double = 3 * X;
        int cost_triple = 2 * Y;
        int min_cost = (cost_double < cost_triple) ? cost_double : cost_triple;
        printf("%d\n", min_cost);
    }
    
    return 0;
}
