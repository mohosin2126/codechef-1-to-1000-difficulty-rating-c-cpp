#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int s, x, y, z;
        cin >> s >> x >> y >> z;
        int free_space = s - (x + y);
        if (free_space >= z)
        {
            cout << "0\n";
        }
        else if (free_space + max(x, y) >= z)
        {
            cout << "1\n";
        }
        else
        {
            cout << "2\n";
        }
    }
    return 0;
}
