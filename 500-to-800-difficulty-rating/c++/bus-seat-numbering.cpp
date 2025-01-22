#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        if (n <= 15)
        {
            if (n % 2 == 0)
            {
                cout << "Lower Double" << endl;
            }
            else
            {
                cout << "Lower Single" << endl;
            }
        }
        else
        {
            if (n % 2 == 0)
            {
                cout << "Upper Double" << endl;
            }
            else
            {
                cout << "Upper Single" << endl;
            }
        }
    }

    return 0;
}