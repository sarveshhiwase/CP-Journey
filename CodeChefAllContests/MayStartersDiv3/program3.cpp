#include<bits/stdc++.h>
#define ll long long int
#define mod 1000000007
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
	ll n,m,k;
	cin >> n >> m >> k;
	ll countarray[n+1] = {0};
	ll arr[k];
	for (int i = 0; i < k; i++)
	{
		cin >> arr[i];
	}
	for (int i = 0; i < k; i++)
	{
		if(arr[i] <= n){
			countarray[arr[i]]++;
		}
	}
	ll countofcheaters = 0;
	vector<ll> cheater;
	for(int i = 1; i < n+1; i++){
		if(countarray[i] > 1){
			countofcheaters++;
			cheater.push_back(i);
		}
	}
	sort(cheater.begin(),cheater.end());
	cout << countofcheaters << " ";
	for(int i = 0; i < cheater.size(); i++){
		cout << cheater[i] << " ";
	}
	cout << "\n";
}
