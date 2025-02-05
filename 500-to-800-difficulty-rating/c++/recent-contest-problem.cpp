#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, start38 = 0, ltime108 = 0;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            string contest;
            cin >> contest;
            if (contest == "START38")
                start38++;
            else
                ltime108++;
        }
        cout << start38 << " " << ltime108 << "\n";
    }
    return 0;
}
