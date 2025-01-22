#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x, y;
    cin >> x >> y;

    int fast_watch_time = y / 2;
    int normal_watch_time = x - y;
    int total_time = fast_watch_time + normal_watch_time;

    cout << total_time << endl;

    return 0;
}
