#include <stdio.h>

int main()
{

    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        int x, y, z;
        scanf("%d %d %d", &x, &y, &z);
        int result;
        result = x - y + z;
        printf("%d\n", result);
    }
    return 0;
}
