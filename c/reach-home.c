#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n; 
    for (int i = 0; i < n; i++) {
        int x, y;
        cin >> x >> y; 
        int result = x * 5; 
        if (result >= y) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    return 0;
}
