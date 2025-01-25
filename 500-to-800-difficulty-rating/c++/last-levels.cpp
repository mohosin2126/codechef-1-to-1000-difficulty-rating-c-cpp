#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        int X, Y, Z;
        cin >> X >> Y >> Z;

        int totalTime = X * Y;
        int breaks = (X - 1) / 3;
        totalTime += breaks * Z;

        cout << totalTime << endl;
    }

    return 0;
}