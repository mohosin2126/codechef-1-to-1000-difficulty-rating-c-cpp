#include <stdio.h>

int main() {
    int t, x, y, z, max_seats, seats_booked, earnings;
    scanf("%d", &t);

    while (t--) {
        scanf("%d %d %d", &x, &y, &z);
        max_seats = 10 * x;
        seats_booked = (y < max_seats) ? y : max_seats;
        earnings = seats_booked * z;
        printf("%d\n", earnings);
    }

    return 0;
}
