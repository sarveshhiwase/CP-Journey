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
	int n;
	cin >> n;
	int arr[n];
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	sort(arr,arr+n,greater<int>());
	vector<bool> visited(n,false);
	vector<int> largest;
	for (int i = 0; i < n-1; i++)
	{
		if(arr[i] == arr[i+1]){
			visited[i] = true;
			largest.insert(largest.begin(),arr[i]);
		}
	}
	for (int i = 0; i < n; i++)
	{
		if(!visited[i])
			largest.push_back(arr[i]);	
	}
	bool finalres = 0;
	for (int i = 0; i < n - 1; i++)
	{
		if(largest[i] == largest[i+1])
			finalres = 1;
	}
	if(finalres)
		disnew("-1")
	else {
		for(auto j:largest){
			dis(j)
		}
		disnew("")
	}
}
