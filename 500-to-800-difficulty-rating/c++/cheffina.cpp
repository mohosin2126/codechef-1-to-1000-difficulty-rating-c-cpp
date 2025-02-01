#include <iostream>
using namespace std;

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        long long N;
        cin >> N;
        long long required_coins = (N / 5) * 4 + (N % 5);

        cout << required_coins << endl;
    }

    return 0;
}
