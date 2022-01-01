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
	ll ones = 0;
	for(int i = 0; i < n; i++){
		cin >> arr[i];
		if(arr[i] == 1) ones++;
	}
	ll max_ones = 0;
	ll curr_zeroes = 0,curr_ones = 0;
	for(int i = 0; i < n; i++){
		for(int j = i; j < n; j++){
			curr_zeroes = curr_ones = 0;
			for(int k = i; k <= j; k++){
				if(arr[k] == 0) curr_zeroes++;
				else curr_ones++;
			}
			max_ones = max(max_ones,curr_zeroes + ones - curr_ones);
		}
	}
	disnew(max_ones)
}