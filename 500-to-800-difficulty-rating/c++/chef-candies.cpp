#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;
        int remaining_candies = max(0, n - x);
        int packets = (remaining_candies + 3) / 4;
        cout << packets << endl;
    }
    return 0;
}
