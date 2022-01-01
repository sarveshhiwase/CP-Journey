#include<bits/stdc++.h>

using namespace std;

bool isLucky(long long int n){
	if(n == 0)
		return false;
	long long int x;
	while(n){
		x = n % 10;
		if(x != 4 && x != 7){
			return false;
		}
		n /= 10;
	}
	return true;
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

while(t--)
{
	solve();
}

cerr<<"time taken : "<<(float)clock()/CLOCKS_PER_SEC<<" secs"<<endl;

return 0;
}

void solve()
{
	long long int n;
	cin >> n;
	// cout << n << endl;
	long long int x;
	long long int luckydigits = 0;
	while(n){
		x = n % 10;
		// cout << x << endl;
		if(x == 4 || x == 7){
			luckydigits++;
		} 
		n /= 10;
	}
	// cout << isLucky(0) << endl;
	// cout << luckydigits << endl;
	if(isLucky(luckydigits)){
		cout << "YES" << endl;
	} else {
		cout << "NO" << endl;
	}
	
}
