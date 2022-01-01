#include<bits/stdc++.h>
#define ll long long int
#define mod 1000000007
#define negmod(a) (a%mod + mod) % mod 
using namespace std;

ll factorial(ll n){
	ll res = n;
	while(--n){
		res *= n;
	}
	return res;
}

//Normal combination formula is i.e nCr = n!/ r!(n-r)!

//Normal solution 
ll combination(ll n,ll r){
	ll numerator = factorial(n);
	ll denominator = factorial(r)*factorial(n-r);
	return numerator/(double)denominator;
}

//Optimized solution is to use pascal triangle to calculate 
//nCr where nCr is addition of n-1Cr-1 + n-1Cr
//Pascal triangle
			// 	    1 0c0
			// 	   / \
			// 	  1   1 1c0 1c1
			// 	 / \ / \	
			// 	1   2   1 2c0 2c1 2c2
		//    / \ / \ / \	
		//   1   3	  3   1	 3c0 3c1 3c2 3c3
		//  / \ / \ / \ / \
	    // 1  4	   6   4   1  4c0 4c1 4c2 4c3 4c4
ll combinationrecursive(ll n, ll r){
	if(r == 0 || r == n){
		return 1;
	}
	return combinationrecursive(n-1,r-1) + combinationrecursive(n-1,r);
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
	cout << combinationrecursive(4,2) << endl;
	cout << combination(4,2) << endl;	
}
