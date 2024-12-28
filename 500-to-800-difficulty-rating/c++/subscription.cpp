
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, x;
        cin >> n >> x;
        int subscriptions = (n + 5) / 6;
        int total_cost = subscriptions * x;
        cout << total_cost << endl;
    }

    return 0;
}
