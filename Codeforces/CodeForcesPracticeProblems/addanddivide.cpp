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
	ll a,b;
	cin >> a >> b;
	if(a == b){
		cout << 2 << endl;
	} else if(a < b){
		cout << 1 << endl;
	} else {
		ll steps = 0;
		b++;
		steps++;
		if(a < b){
			cout << steps+1 << endl;
 		} else {
 			while(a > b){
 				a /= b;
 				steps++;
 			}
 			cout << a << " " << b << endl;
 			if(a == b){
 				cout << steps + 2 << endl;
 			} else {
 				cout << steps+1 << endl;
 			}
 		}

	}
	

}
