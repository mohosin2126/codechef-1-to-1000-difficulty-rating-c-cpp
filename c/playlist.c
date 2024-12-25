#include <stdio.h>

int main() {
    int t, n, x;
    scanf("%d", &t);

    while (t--) {
        scanf("%d %d", &n, &x);
        
        int cycle_time = 3 * x;
        int complete_cycles = n / cycle_time;
        int remaining_time = n % cycle_time;

        int times_listened_to_C = complete_cycles;
        
        if (remaining_time >= 2 * x) {
            times_listened_to_C += 1;
        }

        printf("%d\n", times_listened_to_C);
    }

    return 0;
}
