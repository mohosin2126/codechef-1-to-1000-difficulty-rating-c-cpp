#include <stdio.h>

int main() {
    int t, n, first, last;
    scanf("%d", &t);

    while (t--) {
        scanf("%d", &n);
        last = n % 10;
        while (n >= 10) {
            n /= 10;
        }
        first = n;
        printf("%d\n", first + last);
    }

    return 0;
}
