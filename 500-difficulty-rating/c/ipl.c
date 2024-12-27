#include <stdio.h>

int main()
{
    int t, studentNumber, ticketNumber;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        scanf("%d %d", &studentNumber, &ticketNumber);
        if (studentNumber > ticketNumber)
        {
            printf("%d\n", studentNumber - ticketNumber);
        }
        else
        {
            printf("0\n");
        }
    }
    return 0;
}
