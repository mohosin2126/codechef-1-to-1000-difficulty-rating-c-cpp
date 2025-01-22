#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int x, y;
        cin >> x >> y;

        int distance = abs(x - y);
        int time = (distance + 1) / 2;

        if (x <= y)
        {
            time = distance;
        }
        else
        {
            time = distance;
        }

        cout << time << endl;
    }
}
