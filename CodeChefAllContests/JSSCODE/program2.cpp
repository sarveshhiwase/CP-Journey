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
int t=1;
while(t--)
{
	solve();
}
return 0;
}

void solve()
{
	ll a,b;
	cin >> a >> b;
	ll count = 0;
	for(ll i = a; i <= b; i*=2){
		count++;
	}
	cout << count << "\n";
}
