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
        cout << (y / x > 0 ? (y / x) - (y % x == 0) : 0) << "\n";
    }
    return 0;
}
