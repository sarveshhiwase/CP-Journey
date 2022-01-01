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
	vector<pair<int,int>> coordinates(n,{0,0});
	for (int i = 0; i < n; i++)
	{
		cin >> coordinates[i].first >> coordinates[i].second;	
	}
	ll super_central = 0;
	for (int i = 0; i < n; i++)
	{
		bool left,right,up,down;
		left = right = up = down = false;
		for(int j = 0; j < n; j++){
			if(i == j) continue;
			if(coordinates[i].first < coordinates[j].first && coordinates[i].second == coordinates[j].second)
				right = true;
			if(coordinates[i].first > coordinates[j].first && coordinates[i].second == coordinates[j].second)
				left = true;
			if(coordinates[i].first == coordinates[j].first && coordinates[i].second > coordinates[j].second)
				down = true;
			if(coordinates[i].first == coordinates[j].first && coordinates[i].second < coordinates[j].second)
				up = true;

		}
		if(left && right && up && down)
			super_central++;	
	}
	disnew(super_central)
}


































