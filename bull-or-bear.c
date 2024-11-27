#include <stdio.h>

int main()
{
    int t, x, y;
    scanf("%d", &t);

    for (int i = 0; i < t; i++)
    {
        scanf("%d %d", &x, &y);

        if (x > y)
        {
            printf("LOSS\n");
        }
        else if (x == y)
        {
            printf("NEUTRAL\n");
        }
        else
        {
            printf("PROFIT\n");
        }
    }

    return 0;
}