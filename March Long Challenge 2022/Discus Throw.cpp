#include<bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin >> tc;

    while(tc--)
    {
       int ar[3];

       for(int i=0; i<3; i++)
       {
           cin >> ar[i];
       }
       sort(ar,ar+3);

       cout << ar[2] << endl;
    }

    return 0;
}
