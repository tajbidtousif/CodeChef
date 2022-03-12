#include<bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {

        string str;
        cin>>str;
        int n = str.size();
        int count = 0, ans = 0;
        for(int i = 0 ; i < str.size() ; i++)
        {
            if(str[i] != str[0] && str[i] != str[n-1])
                count+=1;
            else
                count = 0;
            ans = max(ans , count);
        }
        if(ans == 0)
            cout<<-1<<endl;
        else
            cout<<ans<<endl;
    }
}
