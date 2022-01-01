#include<bits/stdc++.h>
#define ll long long int
#define mod 1000000007
#define negmod(a) (a%mod + mod) % mod 
using namespace std;

void solve();

void A(int);
void B(int);

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
	A(20);
}


void B(int n){
	if(n > 1){
		cout << n << endl;
		A(n/2);
		// cout << n << endl;
	}
}

void A(int n){
	if(n > 0){
		cout << n << endl;
		B(n-1);
		// cout << n << endl;
	}
}
