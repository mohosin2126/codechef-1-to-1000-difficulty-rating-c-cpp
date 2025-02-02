#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        int N, K; 
        cin >> N >> K;

        vector<int> values(N);
        int count = 0; 

        for (int i = 0; i < N; i++)
        {
            cin >> values[i];
            values[i] += K; 

            if (values[i] % 7 == 0)
            {
                count++; 
            }
        }

        cout << count << endl;
    }

    return 0;
}
