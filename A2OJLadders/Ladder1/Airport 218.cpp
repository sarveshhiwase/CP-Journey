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


ll sumofn(ll n){
	return (n * (n + 1))/2;
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
	ll n,m;
	cin >> n >> m;
	vector<ll> arr(m,0);
	for(int i = 0; i < m; i++)
	{
		cin >> arr[i];
	}
	vector<ll> arr2 = arr;
	sort(arr.begin(), arr.end());
	sort(arr2.begin(), arr2.end());
	ll first = 0;
	ll t = n;
	while(t > 0){
		t--;
		first += arr[m-1];
		arr[m-1]--;
		sort(arr.begin(), arr.end());
	}
	ll second = 0;
	t = n;
	while(t > 0){
		for(int i = 0; i < m; i++)
		{
			if(t - arr2[i] >= 0){
				second += sumofn(arr2[i]);
				t -= arr2[i];
				arr2[i] = 0;
			}
			else {
				second += sumofn(arr2[i]) - sumofn(abs(arr2[i]-t));
				t = 0;
				arr2[i] -= t;
			}
			if(t <= 0){
				break;
			}
		}
	}
	dis(first) disnew(second)
}







