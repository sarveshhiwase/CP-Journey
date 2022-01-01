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
cin>>t;

while(t--)
{
solve();
}

return 0;
}

void solve()
{
    ll l,r;
    cin >> l >> r;
    vector<ll> bits(32,0);
    for(int i = l; i <= r; i++){
        int j = 31;
        int k = i;
        while(k){
            bits[j--] += (k % 2);
            k /= 2;
        }
    }
    ll min_deletions = 0;
    for(int i = 31; i >= 0; i--){
        min_deletions = max(min_deletions,bits[i]);
    }
    disnew(r - l + 1 - min_deletions)
}