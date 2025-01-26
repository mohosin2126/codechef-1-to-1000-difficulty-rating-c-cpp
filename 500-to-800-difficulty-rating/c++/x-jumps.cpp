#include <iostream>
using namespace std;

int main()
{
    int t, x, y;
    cin >> t;
    while (t--)
    {
        cin >> x >> y;
        int moves = x / y;
        int rem = x % y;
        if (rem > 0)
        {
            moves += rem;
        }
        cout << moves << "\n";
    }
    return 0;
}
