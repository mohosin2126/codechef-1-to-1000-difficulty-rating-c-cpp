#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    for (int i = 0; i < T; i++) {
        int N, X, Y;
        scanf("%d %d %d", &N, &X, &Y);

        int totalPagesChefCanRead = X * Y;

        if (totalPagesChefCanRead >= N) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }

    return 0;
}