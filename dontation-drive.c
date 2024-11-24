#include <stdio.h>

int main()
{
    int t, n, x;
    scanf("%d", &t);
    for (int i = 1; i <= t; i++)
    {
        scanf("%d %d", &n, &x);
        printf("%d\n", n - x);
    }
    return 0;
}
