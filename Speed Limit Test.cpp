#include<bits/stdc++.h>
using namespace std;

int main()
{
    int tc;

    cin >> tc;

    while(tc--)
    {
        int a,x,b,y;
        cin >> a >> x >> b >> y;

        int aa = a*y;
        int bb = b*x;

        if(aa>bb)
        {
            cout << "Alice" << endl;
        }
        else if(aa==bb)
        {
            cout << "Equal" << endl;
        }
        else{
            cout << "Bob" << endl;
        }

    }
}
