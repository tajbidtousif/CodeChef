#include<bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin>>tc;

    while(tc--)
    {
        int n,x;
        cin>>n>>x;
        int a=0,b=0,c=0;
        if(x%3==0)
        {
            a+=(x/3);
        }
        else if(x%3==1)
        {
            a+=(x/3)+1;
            b+=2;
        }
        else if(x%3==2)
        {
            a+=(x/3)+1;
            b++;
        }


        if(a+b<=n)
        {
            std::cout << "YES" << std::endl;
            std::cout << a<<" "<<b<<" "<<n-a-b << std::endl;
        }
        else
        {
            std::cout << "NO" << std::endl;
        }
}
}
