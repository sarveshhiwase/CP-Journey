#include<bits/stdc++.h>
#define ll long long int
#define mod 1000000007
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
	ll n;
	cin >> n;
	ll start = 1;
	for(int i = 1; i <= n; i++){
		if(i & 1){
			int temp = start;
			for(start = start; start < temp + 5; start++){
				cout << start << " ";
			}
			start--;
		} else {
			int temp = start;
			for(start = start + 5; start > temp; start--){
				cout << start << " ";
			}
			start++;
			start += 5;
		}
		cout << "\n";
	}
}
