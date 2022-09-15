#include<bits/stdc++.h>
using namespace std;

int main()
{
    map <int, int> m;

    for(int i=0; i<3; i++)
    {
        int n;
        cin >> n;
        m[n]++;
    }

    for(auto it:m)
    {
        cout << it.first << " " << it.second << endl;
    }
}
