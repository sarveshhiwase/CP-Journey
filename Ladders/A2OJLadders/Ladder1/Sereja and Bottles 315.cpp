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
	ll n;
	cin >> n;
	vector<pair<ll,ll>> v;
	vector<bool> vi(n,0);
	ll a,b;
	for (int i = 0; i < n; i++)
	{
		cin >> a >> b;
		v.push_back({a,b});
	}
	ll count = 0;
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			if(i != j && v[i].second == v[j].first){
				vi[j] = true;
			}
		}
	}
	for(bool j:vi){
		if(!j) count++;
	}
	disnew(count)
}
