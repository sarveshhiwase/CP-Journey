#include<bits/stdc++.h>

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
	int n;
	cin >> n;
	int zero_even_fibonacci = 0;
	int first_even_fibonacci = 2;
	cout << zero_even_fibonacci << " " << first_even_fibonacci << " ";
	int a = 0, b = 2, c = 2;
	while(c <= n){
		c = 4*b + a;
		a = b;
		b = c;
		if (c > n)
		{
			break;
		} 
		cout << c << " ";
	}
	cout << "\n";
}
