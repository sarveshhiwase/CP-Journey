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

bool isperfect(ll n){
	ll x = sqrt(n);
	return x * x == n;
}

void solve();

int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

int t=1;
//cin>>t;

while(t--)
{
	solve();
}

return 0;
}

void solve()
{
	ll n;
	cin >> n;
	ll satisfiers = 0;
	ll does_satisfy;
	for(ll i = 1; i <= n; i++){
		for(ll j = i; j <= n; j++){
			does_satisfy =  i * i + j * j;
			if(isperfect(does_satisfy) && (ll)sqrt(does_satisfy) <= n){
				satisfiers++;
			}
		}
	}
	disnew(satisfiers)
}