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
cin >> t;

while(t--)
{
    solve();
}

cerr<<"time taken : "<<(float)clock()/CLOCKS_PER_SEC<<" secs"<<endl;

return 0;
}



void solve()
{
    ll n,v;
    cin >> n >> v;
    ll max_cost = ((n-1) * n) / 2;

    ll min_cost;
    if(n <= v){
        min_cost = n-1;
    } else {
        ll t = n/v;
        ll sum = (t * (t*v + v))/2;
        min_cost = sum + v;
    }

    dis(max_cost) disnew(min_cost)
}
