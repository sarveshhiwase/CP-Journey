#include<bits/stdc++.h>

using namespace std;

long long int factorial(int n){
	long long int res = n;
	while(--n){
		res *= n;
	}
	return res;
}

long long int multiplytill(int n,int end){
	long long int res = 1;
	for (int i = n; i >= end; i--)
	{
		res *= i;
	}
	return res;
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
	int n,x,y;
	cin >> n >> x >> y;
	long long int res = (multiplytill(n,x+1)/factorial(n-x)) * (multiplytill(n,y+1)/factorial(n-y)); 
	cout << res << endl;
}
