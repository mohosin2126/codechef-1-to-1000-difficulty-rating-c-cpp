#include <stdio.h>

int main()
{
    int T;
    scanf("%d", &T);

    while (T--)
    {
        int K, X;
        scanf("%d %d", &K, &X);

        int total_days = 7 * K;
        int remaining_days = total_days - X;

        printf("%d\n", remaining_days);
    }

    return 0;
}