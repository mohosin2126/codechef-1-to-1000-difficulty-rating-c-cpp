#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; i++) {
        int n, k;
        scanf("%d %d", &n, &k);

        if (k >= n + 1) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }

    return 0;
}