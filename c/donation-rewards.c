#include <stdio.h>

int main() {
    int T, X;
    scanf("%d", &T);
    for (int i = 0; i < T; i++) {
        scanf("%d", &X);
        if (X <= 3) {
            printf("BRONZE\n");
        } else if (X <= 6) {
            printf("SILVER\n");
        } else {
            printf("GOLD\n");
        }
    }
    return 0;
}
