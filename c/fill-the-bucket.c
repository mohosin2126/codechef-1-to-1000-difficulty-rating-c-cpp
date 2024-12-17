#include <stdio.h>

int main() {
    int t, k, x;
    scanf("%d", &t); 
    
    while (t--) {
        scanf("%d %d", &k, &x);
        int extra_water = k - x;
        

        printf("%d\n", extra_water);
    }
    
    return 0;
}
