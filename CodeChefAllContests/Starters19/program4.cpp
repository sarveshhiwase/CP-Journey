#include<bits/stdc++.h>
#define ll long long int
// #define mod 1000000007
#define add insert
#define pb push_back 
#define rep(start,n) for(int i = start; i < n; i++)
#define dis(x) cout << x << " "; 
#define disnew(x) cout << x << "\n"; 
#define negmod(a) (a%mod + mod) % mod 
using namespace std;
const ll mod = 1e9 + 7;

ll powiterative(ll a , ll n){
    ll ans = 1;
    while(n > 0){
        if(n & 1){
            ans = ((ans % mod) * (a % mod)) % mod;
        }
        n /= 2;
        a = ((a % mod) * (a % mod)) % mod;
    }
    return ans % mod;
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
    ll arr[n];
    set<ll> s;
    ll ans = 0;
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for(int i = n - 1; i >= 0; i--)
    {
        // ans = (ans + powiterative(2,n - i - s.size() - 1)) % mod;
        // s.insert(arr[i]);
        if(s.find(arr[i]) == s.end()){
            ans = (ans + powiterative(2,s.size())) % mod;
            s.insert(arr[i]);
        } else {
            ans = (ans + powiterative(2,n - i - s.size() - 1)) % mod;
        } 
    }
    disnew(ans)
}
