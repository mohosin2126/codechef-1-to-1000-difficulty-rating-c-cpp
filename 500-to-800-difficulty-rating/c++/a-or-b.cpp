#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, x, y;
    cin >> t;
    while (t--)
    {
        cin >> x >> y;
        int score1 = (500 - 2 * x) + (1000 - 4 * (x + y));
        int score2 = (1000 - 4 * y) + (500 - 2 * (x + y));
        cout << max(score1, score2) << endl;
    }
    return 0;
}