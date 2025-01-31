#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        int A, B, X, Y;
        cin >> A >> B >> X >> Y;

        double timeChef = (double)A / X;
        double timeChefina = (double)B / Y;

        if (timeChef < timeChefina)
        {
            cout << "Chef" << endl;
        }
        else if (timeChefina < timeChef)
        {
            cout << "Chefina" << endl;
        }
        else
        {
            cout << "Both" << endl;
        }
    }
    return 0;
}
