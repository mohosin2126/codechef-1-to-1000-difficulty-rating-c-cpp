#include <bits/stdc++.h>
using namespace std;

bool can_win(int R, int O, int C)
{
    int max_possible = C + (20 - O) * 6 * 6;
    return max_possible > R;
}

int main()
{
    int R, O, C;
    cin >> R >> O >> C;
    cout << (can_win(R, O, C) ? "YES" : "NO") << endl;
    return 0;
}
