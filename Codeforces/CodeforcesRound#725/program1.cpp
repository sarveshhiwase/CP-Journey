#include<bits/stdc++.h>
#define ll long long int
#define mod 1000000007
#define add insert
#define pb push_back 
#define rep(start,n) for(int i = start; i < n; i++)
#define dis(x) cout << x << "\n"; 
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
	ll n;
	cin >> n;
	ll arr[n];
	rep(0,n){
		cin >> arr[i];
	}
	ll minindex = 0;
	ll maxindex = 0;
	ll mini = arr[0], maxi = arr[0];
	rep(1,n){
		if(arr[i] < mini){
			minindex = i;
			mini = arr[i];
		} else if(arr[i] > maxi) {
			maxindex = i;
			maxi = arr[i];
		}
	}    
	// cout << minindex << " " << maxindex << "\n";
	
	cout << min(minindex,n - 1 - minindex) + min(maxindex,n - 1 - maxindex) << "\n";
	// if(minindex <= n / 2 && maxindex <= n / 2){
	// 	cout << max(minindex,maxindex) + 1 << "\n";
	// } else if(minindex > n / 2 && maxindex > n / 2){
	// 	cout << n - min(minindex,maxindex) << "\n";
	// } else {
	// 	cout << minindex + maxindex + 2 << "\n";
	// }

}
