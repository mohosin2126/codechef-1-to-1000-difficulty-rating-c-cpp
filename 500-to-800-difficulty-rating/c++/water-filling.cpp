#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int b1, b2, b3;
        cin >> b1 >> b2 >> b3;
        int empty_count = (b1 == 0) + (b2 == 0) + (b3 == 0);
        if (empty_count >= 2)
        {
            cout << "Water filling time" << "\n";
        }
        else
        {
            cout << "Not now" << "\n";
        }
    }
    return 0;
}