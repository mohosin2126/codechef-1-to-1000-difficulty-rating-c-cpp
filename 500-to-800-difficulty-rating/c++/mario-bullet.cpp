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

        int travelTime = Y / X;
        int delayTime = max(0, Z - travelTime);

        cout << delayTime << endl;
    }

    return 0;
}