#include <stdio.h>

int main()
{

    long long int n, totalAmount, note;
    scanf("%lld", &n);
    totalAmount = n * 2000;
    note = totalAmount / 500;
    printf("%d", note);
}
