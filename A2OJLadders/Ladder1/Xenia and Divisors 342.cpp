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

bool check(vector<pair<int,int>> v){
	for(int i = 0; i < v.size(); i++)
	{
		if(v[i].second != 0){
			return false;
		}
	}
	return true;
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
//cin>>t;

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
	for(int i = 0; i < n; i++)
	{
		cin >> arr[i];	
		if(arr[i] == 5 || arr[i] == 7){
			disnew(-1)
			return;
		}
	}
	vector<pair<int,int>> v = {{1,0},{2,0},{3,0},{4,0},{6,0}};
	for(int i = 0; i < n; i++)
	{
		if(arr[i] == 6){
			v[arr[i]-2].second++;
		} else {
			v[arr[i]-1].second++;
		}
	}
	// how to reduce
	// 1 2 4
	// 1 2 6
	// 1 3 6
	vector<int> res;
	int t = min(v[0].second,min(v[1].second,v[3].second));
	v[0].second -= t;
	v[1].second -= t;
	v[3].second -= t;
	res.push_back(t);

	t =  min(v[0].second,min(v[1].second,v[4].second));
	v[0].second -= t;
	v[1].second -= t;
	v[4].second -= t;
	res.push_back(t);

	t =  min(v[0].second,min(v[2].second,v[4].second));
	v[0].second -= t;
	v[2].second -= t;
	v[4].second -= t;
	res.push_back(t);
	if(!check(v)){
		disnew(-1)
		return;
	}
	for(int i = 0; i < res.size(); i++)
	{
		if(i == 0){
			while(res[i]--){
				dis(1) dis(2) disnew(4)
			}
		} else if(i == 1){
			while(res[i]--){
				dis(1) dis(2) disnew(6)
			}
		} else {
			while(res[i]--){
				dis(1) dis(3) disnew(6)
			}
		}
	}
}