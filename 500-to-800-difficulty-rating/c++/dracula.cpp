#include <bits/stdc++.h>
using namespace std;

int count_tuesdays(int N)
{
    return N / 7 + (N % 7 >= 2 ? 1 : 0);
}

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int N;
        cin >> N;
        cout << count_tuesdays(N) << endl;
    }
    return 0;
}
