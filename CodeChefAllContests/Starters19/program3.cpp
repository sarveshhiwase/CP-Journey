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
    if(n == 2){
        dis(2) disnew(1)
        return;
    }
    vector<ll> v(n + 1,0);
    for(int i = 1; i <= n; i++)
    {
        v[i] = i;   
    }
    for(int i = 2; i < n; i++)
    {
        swap(v[i],v[i+1]);
    }
    for(int i = 1; i <= n; i++)
    {
        dis(v[i])   
    }
    disnew("")
}
