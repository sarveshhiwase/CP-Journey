#include<bits/stdc++.h>

using namespace std;

int sumTillOnedigit(int n){
	if(n < 10){
		return n;
	}
	int x;
	int sum = 0;
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
	int sumofdigits = 0;
	int x;
	while(n){
		x = n % 10;
		sumofdigits += x;
		n /= 10;
	}
	while((sumTillOnedigit(sumofdigits)) >= 10){
		sumofdigits = sumTillOnedigit(sumofdigits);
	}
	sumofdigits = sumTillOnedigit(sumofdigits);
	cout << sumofdigits << endl;
}
