#include<bits/stdc++.h>

using namespace std;

int sumofdigits(long long int n){
	int sum = 0;
	int x;
	while(n){
		x = n % 10;
		sum += x;
		n /= 10;
	}
	return sum;
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
	long long int n;
	cin >> n;
	if(n%2050)
		cout << -1 << endl;
	else
		cout << sumofdigits(n/2050) << endl;
}
