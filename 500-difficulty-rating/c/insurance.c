#include <stdio.h>

int main() {
    int t, x, y, rebate;
    scanf("%d", &t);

    while (t--) {
        scanf("%d %d", &x, &y);
        rebate = (y <= x) ? y : x;
        printf("%d\n", rebate);
    }

    return 0;
}
