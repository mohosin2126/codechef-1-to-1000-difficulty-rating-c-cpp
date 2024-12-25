#include <stdio.h>

int main() {
    int t, n, m, k, available_seats;
    scanf("%d", &t);

    while (t--) {
        scanf("%d %d %d", &n, &m, &k);
        available_seats = m - k;
        if (n <= available_seats)
            printf("Yes\n");
        else
            printf("No\n");
    }

    return 0;
}
