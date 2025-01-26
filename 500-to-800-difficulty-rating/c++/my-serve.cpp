#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, p, q;
    cin >> t;
    while (t--)
    {
        cin >> p >> q;
        cout << ((p + q) / 2 % 2 ? "Bob" : "Alice") << "\n";
    }
    return 0;
}