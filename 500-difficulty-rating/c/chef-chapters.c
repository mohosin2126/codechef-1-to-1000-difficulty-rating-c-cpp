#include <stdio.h>

int main()
{
    int T;
    scanf("%d", &T);
    while (T--)
    {
        int X, Y, Z;
        scanf("%d %d %d", &X, &Y, &Z);
        printf("%d\n", X * Y * Z);
    }
    return 0;
}