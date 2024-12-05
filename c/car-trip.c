#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    for (int i = 0; i < T; i++) {
        int X;
        scanf("%d", &X);

        int cost = (X >= 300 ? X : 300) * 10;
        printf("%d\n", cost);
    }

    return 0;
}
