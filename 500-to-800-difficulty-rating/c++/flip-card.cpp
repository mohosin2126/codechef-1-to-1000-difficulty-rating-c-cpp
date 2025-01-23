#include <iostream>
using namespace std;

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        int N, X;
        cin >> N >> X;
        int minFlips = min(X, N - X);
        cout << minFlips << endl;
    }

    return 0;
}
