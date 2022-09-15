#include<bits/stdc++.h>
using namespace std;

int main()
{
    int tc;

    cin >> tc;

    while(tc--)
    {
        long long int m_tk = 0,ans =0;

        long long int w,x,y,z; //999 25 36 9
        cin >> w >> x >> y >> z;

         m_tk =(x-y);
        //cout << m_tk << endl; //-99

         ans = w+(m_tk*z);

        cout << ans << endl;

    }
}
