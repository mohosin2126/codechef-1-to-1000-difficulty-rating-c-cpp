#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;

    int maxLead = 0, winner = 0;
    int player1Cumulative = 0, player2Cumulative = 0;

    while (N--)
    {
        int S, T;
        cin >> S >> T;

        player1Cumulative += S;
        player2Cumulative += T;

        int currentLead = abs(player1Cumulative - player2Cumulative);
        int currentLeader = (player1Cumulative > player2Cumulative) ? 1 : 2;

        if (currentLead > maxLead)
        {
            maxLead = currentLead;
            winner = currentLeader;
        }
    }

    cout << winner << " " << maxLead << endl;
    return 0;
}
