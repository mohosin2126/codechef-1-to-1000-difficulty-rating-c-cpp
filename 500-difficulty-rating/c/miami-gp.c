#include <stdio.h>

int main() {
    int t, x, y;
    scanf("%d", &t);

    while (t--) {
        scanf("%d %d", &x, &y);
        if (y <= 1.07 * x) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }

    return 0;
}
