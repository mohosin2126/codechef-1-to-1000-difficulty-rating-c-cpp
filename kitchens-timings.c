#include <stdio.h>

int main()
{
    int t, x, y;
    scanf("%d", &t);
    for (int i = 1; i <= t; i++)
    {
        scanf("%d %d ", &x, &y);
        printf("%d\n", y - x);
    }
    return 0;
}
