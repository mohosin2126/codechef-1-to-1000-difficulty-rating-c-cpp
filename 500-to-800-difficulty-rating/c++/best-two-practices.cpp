#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        vector<int> rolls(6);
        for (int i = 0; i < 6; i++)
        {
            cin >> rolls[i];
        }

        sort(rolls.begin(), rolls.begin() + 3, greater<int>());
        sort(rolls.begin() + 3, rolls.end(), greater<int>());

        int aliceScore = rolls[0] + rolls[1];
        int bobScore = rolls[3] + rolls[4];

        if (aliceScore > bobScore)
            cout << "Alice" << endl;
        else if (aliceScore < bobScore)
            cout << "Bob" << endl;
        else
            cout << "Tie" << endl;
    }
    return 0;
}
