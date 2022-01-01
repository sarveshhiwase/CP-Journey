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
/*cin>>t;*/

while(t--)
{
	solve();
}

cerr<<"time taken : "<<(float)clock()/CLOCKS_PER_SEC<<" secs"<<endl;

return 0;
}

void solve()
{
	int k,n,w;
	cin >> k >> n >> w;
	// k is cost multiplier
	// w is no. of bananas to buy
	// n is intial money
	int costofbananas = 0;
	for (int i = 1; i <= w; i++)
	{
		costofbananas += i * k;
	}
	if(costofbananas > n){
		cout << costofbananas - n << endl;
 	} else {
 		cout << 0 << endl;
 	}
}
