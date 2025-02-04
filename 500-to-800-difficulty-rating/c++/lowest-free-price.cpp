#include <bits/stdc++.h>
using namespace std;

int minFlipsToZero(int N, vector<int> &A)
{
    int sum = accumulate(A.begin(), A.end(), 0);

    if (sum == 0)
        return 0;
    if (abs(sum) % 2 == 1)
        return -1;
    return abs(sum) / 2;
}

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int N;
        cin >> N;
        vector<int> A(N);
        for (int i = 0; i < N; i++)
        {
            cin >> A[i];
        }

        cout << minFlipsToZero(N, A) << endl;
    }
    return 0;
}
