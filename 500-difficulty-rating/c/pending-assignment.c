#include <stdio.h>

int main() {
    int t, x, y, z, total_time, available_time;
    scanf("%d", &t);

    while (t--) {
        scanf("%d %d %d", &x, &y, &z);
        total_time = x * y;
        available_time = z * 24 * 60;
        if (total_time <= available_time)
            printf("YES\n");
        else
            printf("NO\n");
    }

    return 0;
}
