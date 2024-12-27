#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        int A, B, C, D;
        scanf("%d %d %d %d", &A, &B, &C, &D);

        int price1 = A - C;
        int price2 = B - D;

        if (price1 < price2) {
            printf("First\n");
        } else if (price1 > price2) {
            printf("Second\n");
        } else {
            printf("Any\n");
        }
    }

    return 0;
}
