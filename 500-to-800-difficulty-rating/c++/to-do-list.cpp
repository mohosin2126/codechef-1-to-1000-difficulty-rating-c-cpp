#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, count = 0, d;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> d;
            if (d >= 1000)
                count++;
        }
        cout << count << endl;
    }
    return 0;
}
