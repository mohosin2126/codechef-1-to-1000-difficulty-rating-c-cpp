#include <iostream>
using namespace std;

int main()
{
    int t, x;
    cin >> t;
    while (t--)
    {
        cin >> x;
        if (x <= 50)
            cout << "LEFT" << endl;
        else
            cout << "RIGHT" << endl;
    }
    return 0;
}
