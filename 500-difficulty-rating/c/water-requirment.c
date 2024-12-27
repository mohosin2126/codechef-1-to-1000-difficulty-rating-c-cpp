#include <stdio.h>

int main()
{
    int t, n;

    scanf("%d", &t);

    for (int i = 0; i < t; i++)
    {
        scanf("%d", &n);
        printf("%d\n", 2 * n);
    }

    return 0;
}
