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
bool cannot = false;

bool issame(vector<int> arr){
	int len = arr.size();
	for(int i = 1; i < len; i++)
	{
		if(arr[i] != arr[0])
			return false;
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
	ll n,k;
	cin >> n >> k;
	vector<int> arr(n,0);
	for(int i = 0; i < n; i++)
	{
		cin >> arr[i];	
	}
	vector<int> temp;
	for(int i = k - 1; i < n; i++)
	{
		temp.push_back(arr[i]);
	}
	int t = n - k;
	int i = k - 1;
	while(t--){
		temp.push_back(arr[i++]);
	}
	for(int i = 0; i < n; i++)
	{
		dis(temp[i])	
	}
	int c = 0;
	while(!issame(arr)){
		c++;
		arr.push_back(arr[k-1]);
		arr.erase(arr.begin());
	}
	disnew(c)
}