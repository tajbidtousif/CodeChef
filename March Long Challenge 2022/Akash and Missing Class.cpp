#include<bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin >> tc;

    while(tc--)
    {
        long long n;
        cin >> n;

        cout << (n/7)+(n%7)/6 << endl;

    }
}
