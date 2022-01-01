// Link - https://leetcode.com/problems/find-all-duplicates-in-an-array/
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
cin >> t;

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
	int newind;
	vector<int> res;
	for (int i = 0; i < n; i++)
	{
		newind = abs(arr[i]) - 1;
		if(arr[newind] > 0){
			arr[newind] *= -1;
		} else {
			res.push_back(abs(arr[i]));
		}
	}
	for (int i = 0; i < res.size(); i++)
	{
		dis(res[i])
	}
	disnew("")
}