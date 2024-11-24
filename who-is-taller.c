#include <stdio.h>

int main()
{
    int t, alice, bob;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        scanf("%d %d", &alice, &bob);
        if (bob > alice)
        {
            printf("B\n");
        }
        else
        {
            printf("A\n");
        }
    }
    return 0;
}
