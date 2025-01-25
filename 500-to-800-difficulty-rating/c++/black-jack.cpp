#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        int A, B;
        cin >> A >> B;

        int thirdNumber = 21 - (A + B);

        if (thirdNumber >= 1 && thirdNumber <= 10)
        {
            cout << thirdNumber << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }

    return 0;
}