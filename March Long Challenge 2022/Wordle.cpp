#include<bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin >> tc;

    while(tc--)
    {
        string s, t, m;

        cin >> s >> t;

        for(int i=0; i<5; i++)
        {
            if(s[i]==t[i])
            {
                m[i] = 'G';
            }
            else{
                m[i] = 'B';
            }
        }

        for(int i=0; i<5; i++)
        {
            cout << m[i];
        }

        cout << endl;
    }
}
