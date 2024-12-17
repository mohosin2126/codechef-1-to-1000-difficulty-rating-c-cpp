#include <stdio.h>

int main() {
    int t, x;
    scanf("%d", &t);
    
    while (t--) {
        scanf("%d", &x);
        int price = 100 - x; 
        printf("%d\n", price);
    }
    
    return 0;
}
