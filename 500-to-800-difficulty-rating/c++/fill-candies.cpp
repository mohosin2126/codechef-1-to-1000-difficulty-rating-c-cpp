#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        int N, K, M;
        cin >> N >> K >> M;
        int bagCapacity = K * M;
        int bagsNeeded = (N + bagCapacity - 1) / bagCapacity;

        cout << bagsNeeded << endl;
    }

    return 0;
}