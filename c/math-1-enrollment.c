#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        int x, y;
        scanf("%d %d", &x, &y);
        if (x < y)
        {
            printf("%d\n", y - x);
        }
        else
        {
            printf("0\n");
        }
    }
    return 0;
}
