#include<bits/stdc++.h>
#define ll long long int
#define add insert
#define pb push_back 
#define rep(start,n) for(int i = start; i < n; i++)
#define dis(x) cout << x << " "; 
#define disnew(x) cout << x << "\n"; 
#define negmod(a) (a%mod + mod) % mod 
using namespace std;
const int mod = 1e9 + 7;


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
    ll a,b;
    ll u,v;
    for (int i = 0; i <= n; i++)
    {
        a = i;
        for(int j = 0; j <= n; j++){
            b = j;
            u = a ^ b;
            v = a + b;
            if(u <= n && v <= n){
                dis(u)dis(v)dis(a) disnew(b)
            }
        }
    }
    // n %= mod;
    // ll res = (((((n+1) % mod) * ((n + 2) % mod)) % mod) / 2) % mod;
    // if(res & 1){
    //     res++;
    // } 
    // res /= 2;

    // disnew(res)
}
