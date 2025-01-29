#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, count = 0, age;
        cin >> n;
        while (n--)
        {
            cin >> age;
            if (age >= 10 && age <= 60)
                count++;
        }
        cout << count << "\n";
    }
    return 0;
}
