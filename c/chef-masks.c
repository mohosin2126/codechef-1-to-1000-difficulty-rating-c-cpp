#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T); 
    
    while (T--) {
        int X, Y;
        scanf("%d %d", &X, &Y); 
        int disposable_cost = 100 * X;
        int cloth_cost = 10 * Y;
    
        if (disposable_cost < cloth_cost) {
            printf("DISPOSABLE\n");
        } else {
            printf("CLOTH\n");
        }
    }
    
    return 0;
}
