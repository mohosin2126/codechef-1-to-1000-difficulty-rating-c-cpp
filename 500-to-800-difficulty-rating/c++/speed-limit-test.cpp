#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, a, x, b, y;
    cin >> t;
    while (t--)
    {
        cin >> a >> x >> b >> y;
        double speed_alice = (double)a / x;
        double speed_bob = (double)b / y;
        if (speed_alice > speed_bob)
        {
            cout << "ALICE" << endl;
        }
        else if (speed_alice < speed_bob)
        {
            cout << "BOB" << endl;
        }
        else
        {
            cout << "EQUAL" << endl;
        }
    }
    return 0;
}
