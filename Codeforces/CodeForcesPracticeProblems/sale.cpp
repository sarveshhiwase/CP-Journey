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

while(t--)
{
	solve();
}

cerr<<"time taken : "<<(float)clock()/CLOCKS_PER_SEC<<" secs"<<endl;

return 0;
}

void solve()
{
	int n,m;
	cin >> n >> m;
	int negatives = 0;
	int arr[n];
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
		if(arr[i] < 0){
			negatives++;
		}
	}
	sort(arr,arr+n);
	int money = 0;
	int i = 0;
	while(i < m){
		if(arr[i] < 0){
			money += arr[i];
		}
		i++;
	}
	money *= -1;
	disnew(money)
}
