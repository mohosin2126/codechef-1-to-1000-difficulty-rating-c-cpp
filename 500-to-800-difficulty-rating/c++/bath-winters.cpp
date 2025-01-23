#include <iostream>
using namespace std;

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        int X, Y;
        cin >> X >> Y;
        int max_people = X / (2 * Y);
        cout << max_people << endl;
    }

    return 0;
}
