#include <iostream>
using namespace std;

int main()
{
    int t, a, b;
    cin >> t;
    while (t--)
    {
        cin >> a >> b;
        int valuation1 = a * 10;
        int valuation2 = b * 5;
        if (valuation1 > valuation2)
        {
            cout << "FIRST" << endl;
        }
        else if (valuation1 < valuation2)
        {
            cout << "SECOND" << endl;
        }
        else
        {
            cout << "ANY" << endl;
        }
    }
    return 0;
}
