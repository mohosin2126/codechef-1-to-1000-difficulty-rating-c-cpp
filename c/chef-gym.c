#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    
    while (t--) {
        int x, y, z;
        scanf("%d %d %d", &x, &y, &z);
        
        if (x + y <= z) {
            printf("2\n");
        } else if (x <= z) {
            printf("1\n");
        } else {
            printf("0\n");
        }
    }

    return 0;
}
