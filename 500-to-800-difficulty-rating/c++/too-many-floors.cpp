#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, x, y;
    cin >> t;
    while (t--)
    {
        cin >> x >> y;
        cout << abs((x - 1) / 10 - (y - 1) / 10) << endl;
    }
    return 0;
}