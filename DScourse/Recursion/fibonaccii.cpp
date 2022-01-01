#include<bits/stdc++.h>
#define ll long long int
#define mod 1000000007
#define negmod(a) (a%mod + mod) % mod 
using namespace std;

//Excessive Recursion - This is recursion in which same recursive calls 
// are made for same parameters again, which we don't need to calculate again.
//Time complexity is O(2^n)
// Space is O(n)
int fibonacci(int n){
	if(n <= 1){
		return n;
	}
	return fibonacci(n-2) + fibonacci(n-1);
}

//Optimizing excessive recursion using memoization
// Basically memoization is just technique to store calculations
// in a variable like normal integer,array or any object
// to avoid function calls for same parameters;
vector<int> fib(1000,-1);
int fibonaccimemo(int n){
	if(n <= 1){
		fib[n] = n;
		return n;
	}
	if(fib[n-2] == -1){
		fib[n-2] = fibonaccimemo(n-2);
	} 
	if(fib[n-1] == -1){
		fib[n-1] = fibonaccimemo(n-1);
	}
	fib[n] = fib[n-2] + fib[n-1];
	return fib[n];
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
	cout << fibonacci(5) << endl;
	cout << fibonaccimemo(5) << endl;
}
