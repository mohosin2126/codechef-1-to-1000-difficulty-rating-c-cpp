#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N, M;
        cin >> N >> M;
        int extra_shoes = max(N, 2 * N - M);
        cout << extra_shoes << endl;
    }

    return 0;
}
