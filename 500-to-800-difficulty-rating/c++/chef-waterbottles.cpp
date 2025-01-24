#include <iostream>
using namespace std;

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        int N, X, K;
        cin >> N >> X >> K;
        int max_bottles = min(N, K / X);
        cout << max_bottles << endl;
    }

    return 0;
}
