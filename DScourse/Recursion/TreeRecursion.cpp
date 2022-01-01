#include<bits/stdc++.h>
#define ll long long int
#define mod 1000000007
#define negmod(a) (a%mod + mod) % mod 
using namespace std;

//Tree recursion is recursion in which more than one recursive calls
// are made
// Time complexity is O(2^n)
// Space Complexity is O(n) as maximum stack size is n;
// We should understand the working by drawing it's recursive tree.
void treerecursion(int n){
	if(n > 0){
		cout << n << endl;
		treerecursion(n-1);
		treerecursion(n-1);
	}
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
	treerecursion(5);
}
