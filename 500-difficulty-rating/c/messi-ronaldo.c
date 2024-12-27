#include <stdio.h>

int main()
{
    int A, B, X, Y;
    scanf("%d %d %d %d", &A, &B, &X, &Y);

    int messi_points = A * 2 + B;
    int ronaldo_points = X * 2 + Y;

    if (messi_points > ronaldo_points)
    {
        printf("Messi\n");
    }
    else if (ronaldo_points > messi_points)
    {
        printf("Ronaldo\n");
    }
    else
    {
        printf("Equal\n");
    }

    return 0;
}