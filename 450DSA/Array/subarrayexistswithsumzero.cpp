#include<bits/stdc++.h>
#define ll long long int
#define mod 1000000007
#define mp make_pair
#define pb push_back
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
	//This would work if we just want to identify if the 
	// the subarray exists or not
	// but we want to find index wgere it starts and ends
	// we can use map with vectors to store indices
	ll sum = 0;
	map<ll,vector<ll> > m;
	vector<pair<ll,ll>> v;
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
		if(arr[i] == 0 || sum == 0 || m[sum].size() != 0){
			if(arr[i]==0)
                v.pb(mp(i,i));
            else if(sum==0)
                v.pb(mp(0,i));      
            if( m[sum].size() != 0) {
            	for(int j = 0; j < m[sum].size(); j++)
                    v.pb(mp(m[sum][j]+1,i));
            }
		}
		m[sum].pb(i);
	}
	if(v.size() == 0)
		cout << "No subarray exists with sum zero" << "\n";
	else
		for(int i = 0; i < v.size(); i++){
			cout << v[i].first << " " << v[i].second << "\n";
		}
}
