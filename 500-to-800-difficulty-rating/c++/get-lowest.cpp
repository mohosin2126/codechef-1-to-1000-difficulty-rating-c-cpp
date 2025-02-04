#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int A, B, C;
        cin >> A >> B >> C;
        int minPrice = min({A, B, C});
        int totalCost = (A + B + C) - minPrice;
        cout << totalCost << endl;
    }
    return 0;
}