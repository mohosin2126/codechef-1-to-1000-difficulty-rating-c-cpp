#include <stdio.h>

int main() {
    int t, w, x, y, z;
    scanf("%d", &t);

    while (t--) {
        scanf("%d %d %d %d", &w, &x, &y, &z);
        int total = w + y * z;
        if (total > x) {
            printf("overflow\n");
        } else if (total == x) {
            printf("filled\n");
        } else {
            printf("unfilled\n");
        }
    }

    return 0;
}
