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

int t=1;
//cin>>t;

while(t--)
{
	solve();
}

return 0;
}

void solve()
{
	ll n;
	cin >> n;
	ll arr[n];
	ll a,b;
	for(int i = 0; i < n; i++){
		cin >> arr[i];
	}
	ll total_sum = 0;
	ll change;
	for(int i = 0; i < n; i++){
		change = arr[i] - 25;
		if(total_sum < change){
			disnew("NO")
			return;
		} else if(change == 75){
			total_sum -= 75;
		} else if(change == 25){
			total_sum -= 25;
		} 
		total_sum += 25;
	}
	disnew("YES")
}