#include "bits/stdc++.h"
using namespace std;

#define ll long long

#define ull unsigned long long
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define be begin()
#define en end()
#define all(x) (x).begin(),(x).end()
#define out cout<<setprecision(20)

typedef vector<int> vi;
typedef vector<ll> vll;
typedef set<int> si;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;

const int MOD = 1e9 + 7;
const int INF = 1e9;

double round(double var)
{
    double ret=(int)(var*100+0.5);
    return (double)ret/100;
}

int main(int argc, char* argv[])
{
    if(argc == 2 or argc == 3) freopen(argv[1], "r", stdin);
    if(argc == 3) freopen(argv[2], "w", stdout);
    ios::sync_with_stdio(false);

    int t;
    cin>>t;

    while(t--)
    {
        double a,b,c,d;

        cin >> a >> b >> c >> d;
        
        double e = a*b*c*d;
        
        e=round(100/e);
        
        if(e<9.58)
        {
            puts("YES");
        }
        
        else
        {
            puts("NO");
        }
    }
    
    return 0;
}