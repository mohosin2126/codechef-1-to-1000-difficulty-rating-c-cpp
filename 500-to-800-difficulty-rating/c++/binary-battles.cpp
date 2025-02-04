#include <bits/stdc++.h>
using namespace std;

int tournamentTime(int N, int A, int B)
{
    int rounds = log2(N);
    return (rounds * A) + ((rounds - 1) * B);
}

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int N, A, B;
        cin >> N >> A >> B;

        cout << tournamentTime(N, A, B) << endl;
    }
    return 0;
}
