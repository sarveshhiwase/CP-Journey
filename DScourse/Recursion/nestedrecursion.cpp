#include<bits/stdc++.h>
#define ll long long int
#define mod 1000000007
#define negmod(a) (a%mod + mod) % mod 
using namespace std;

//Nested recursion is basically a recursion in a recursion,
//basically we give recursive call as parameter to recursive call
//It grows really fast
int nestedrecursion(int n){
	if(n > 100){
		return n - 10;
	}
	return nestedrecursion(nestedrecursion(n+11));
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
	cout << nestedrecursion(95) << endl;
}
