#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, a, b;
        cin >> n >> a >> b;
        int odd_count = (n + 1) / 2;
        int even_count = n / 2;
        cout << (odd_count * b + even_count * a) << "\n";
    }
    return 0;
}
