#include <stdio.h>

int main()
{
    int n, m, x, y;
    scanf("%d %d", &n, &m);
    scanf("%d %d", &x, &y);
    int totalTreats = (n * x) + (m * y);
    printf("%d\n", totalTreats);

    return 0;
}