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
        int secondLargest;
        if ((a > b && a < c) || (a < b && a > c))
        {
            secondLargest = a;
        }
        else if ((b > a && b < c) || (b < a && b > c))
        {
            secondLargest = b;
        }
        else
        {
            secondLargest = c;
        }

        cout << secondLargest << endl;
    }

    return 0;
}
