#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, y;
        cin >> x >> y;
        int total_coins = x * y;
        int bags = total_coins / 100;
        cout << bags << "\n";
    }
    return 0;
}