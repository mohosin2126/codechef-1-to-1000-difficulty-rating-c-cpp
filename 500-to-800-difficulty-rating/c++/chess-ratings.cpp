#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        int X, Y;
        cin >> X >> Y;

        int diff = Y - X;
        int games = (diff + 7) / 8;

        cout << games << endl;
    }

    return 0;
}
