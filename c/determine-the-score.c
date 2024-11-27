#include <stdio.h>

int main()
{
    int t, x, y, points, testCases;
    scanf("%d", &t);
    for (int i = 1; i <= t; i++)
    {

        scanf("%d %d", &x, &y);
        testCases = x / 10;
        points = testCases * y;
        printf("%d\n", points);
    }
    return 0;
}