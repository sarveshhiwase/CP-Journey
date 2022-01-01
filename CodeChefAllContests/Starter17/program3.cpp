#include<bits/stdc++.h>
#define ll long long int
#define mod 1000000007
#define add insert
#define pb push_back 
#define rep(start,n) for(int i = start; i < n; i++)
#define dis(x) cout << x << " "; 
#define disnew(x) cout << x << "\n"; 
#define negmod(a) (a%mod + mod) % mod 
using namespace std;

int gcd(int a, int b)
{
    if (a == 0)
        return b;
    return gcd(b % a, a);
}
 

void solve();

int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("error.txt", "w", stderr);
freopen("output.txt", "w", stdout);
#endif

int t=1;
cin>>t;

while(t--)
{
    solve();
}

cerr<<"time taken : "<<(float)clock()/CLOCKS_PER_SEC<<" secs"<<endl;

return 0;
}

void solve()
{
    ll n;
    cin >> n;
    vector<ll> sad(n,0);
    for (int i = 0; i < n; i++)
    {
        cin >> sad[i];    
    }
    vector<ll> mad;
    ll tp = 0;
    for (int i = 0; i < n; i++)
    {
        tp = gcd(tp,sad[i]);
        mad.push_back(tp);
    }
    if(mad == sad){
        for (int i = 0; i < n; i++)
        {
            dis(mad[i])
        }
        disnew("")
    } else {
        disnew("-1")
    }
   
}
