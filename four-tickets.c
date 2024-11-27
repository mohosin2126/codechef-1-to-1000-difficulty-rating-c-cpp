#include <stdio.h>

int main()
{

    int t, x, total;
    scanf("%d", &t);

    for (int i = 0; i < t; i++)
    {
        scanf("%d", &x);
        total = x * 4;
        if (total <= 1000)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
    return 0;
}
