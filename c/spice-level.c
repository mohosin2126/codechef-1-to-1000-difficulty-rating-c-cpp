#include <stdio.h>

int main() {
    int T, X;
    scanf("%d", &T);
    for (int i = 0; i < T; i++) {
        scanf("%d", &X);
        if (X < 4) printf("MILD\n");
        else if (X < 7) printf("MEDIUM\n");
        else printf("HOT\n");
    }
    return 0;
}
