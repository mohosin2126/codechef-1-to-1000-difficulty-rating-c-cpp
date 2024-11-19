#include <stdio.h>

int main()
{

    long long int t, x, y, payment;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        scanf("%d %d", &x, &y);
        payment = x * y;
        printf("%d\n", payment);
    }
    return 0;
}
