#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int w, x, y, z;
        cin >> w >> x >> y >> z;
        vector<int> weights = {x, y, z, x + y, x + z, y + z, x + y + z};
        bool found = false;
        for (int val : weights)
        {
            if (val == w)
            {
                found = true;
                break;
            }
        }
        cout << (found ? "YES" : "NO") << "\n";
    }
    return 0;
}
