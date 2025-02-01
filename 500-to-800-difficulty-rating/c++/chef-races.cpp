#include <iostream>
using namespace std;

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        int X, Y, A, B;
        cin >> X >> Y >> A >> B;

        int gold_medals = 0;
        if (X != A && X != B)
            gold_medals++;
        if (Y != A && Y != B)
            gold_medals++;

        cout << gold_medals << endl;
    }

    return 0;
}
