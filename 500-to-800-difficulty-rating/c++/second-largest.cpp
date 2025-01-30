#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;

        int largest = max(a, max(b, c));
        int secondLargest = min(max(a, b), max(b, c));

        cout << secondLargest << endl;
    }

    return 0;
}
