#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;
        int total_slices = n * x;
        int pizzas = (total_slices + 3) / 4;
        cout << pizzas << "\n";
    }
    return 0;
}
