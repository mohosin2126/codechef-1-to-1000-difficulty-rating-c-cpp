#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, n;
        cin >> x >> n;
        int required_planes = (n + 99) / 100;
        cout << max(0, required_planes - x) << "\n";
    }
    return 0;
}
