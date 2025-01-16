#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        long long total_income = 50LL * n;
        long long expenses = (20 * total_income) / 100 + (20 * total_income) / 100 + (30 * total_income) / 100;
        long long profit = total_income - expenses;
        cout << profit << endl;
    }
    return 0;
}
