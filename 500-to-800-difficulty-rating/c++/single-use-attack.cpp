#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        int H, X, Y;
        cin >> H >> X >> Y;
        int attacks_normal = (H + X - 1) / X;
        int remaining_health_after_special = H - Y;
        int attacks_with_special = (remaining_health_after_special > 0) ? (1 + (remaining_health_after_special + X - 1) / X) : 1;
        cout << min(attacks_normal, attacks_with_special) << endl;
    }

    return 0;
}
