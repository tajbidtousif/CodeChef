#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        unordered_map<int, int> m;
        int n;
        cin >> n;
        int ar[n];

        for (int i = 0; i < n; i++)
        {
            cin >> ar[i];
            m[ar[i]]++;
        }
       long long int ans = 0;
        for (auto it : m)
        {
            int t;
            if (it.second > 1)
            {
                t = it.second;
                ans += t * (t-1)/2;
            }
        }

        cout << ans << endl;

        // for(auto it:m)
        // {
        //     cout << it.first << " " << it.second << endl;
        // }
    }

    return 0;
}