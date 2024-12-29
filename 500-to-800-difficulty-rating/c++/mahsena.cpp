#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;

    int weapons[100];

    for (int i = 0; i < N; i++)
    {
        cin >> weapons[i];
    }

    int lucky_count = 0;
    int unlucky_count = 0;

    for (int i = 0; i < N; i++)
    {
        if (weapons[i] % 2 == 0)
        {
            lucky_count++;
        }
        else
        {
            unlucky_count++;
        }
    }

    if (lucky_count > unlucky_count)
    {
        cout << "READY FOR BATTLE" << endl;
    }
    else
    {
        cout << "NOT READY" << endl;
    }

    return 0;
}
