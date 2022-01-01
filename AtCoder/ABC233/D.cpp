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

int t=1;
// cin>>t;

while(t--)
{
solve();
}

return 0;
}

void solve()
{
    ll n,k;
    cin >> n >> k;
    ll arr[n];
    map<ll,ll> m;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    ll c = 0;
    ll s = 0;
    m[0]++;
    for(int i = 0; i < n; i++){
        s += arr[i];
        if(m[s-k]){
            c += m[s-k];
        }
        m[s]++;
    }
    disnew(c)
}