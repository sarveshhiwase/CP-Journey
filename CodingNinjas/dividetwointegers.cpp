//Intuit
//link - https://www.codingninjas.com/codestudio/problems/divide-two-integers_1112617
#include<bits/stdc++.h>
#define ll long long int
#define mod 1000000007
#define add insert
#define pb push_back 
#define rep(start,n) for(int i = start; i < n; i++)
#define dis(x) cout << x << " "; 
#define disnew(x) cout << x << "\n"; 
#define negmod(a) (a%mod + mod) % mod 
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
	ll dividend,divisor;
	cin >> dividend >> divisor;
	//basic approach is to either add or subtract
	// we can subtract divident with divisor until
	// divident becomes less than divisor
	// and no. of times subtraction is performed is our quotient
	// also applicable vice versa for addition

	// to get final sign of quotient
	ll sign = ((dividend < 0) ^(divisor < 0)) ? -1 : 1;

	// make both divident and divisor positive to successfully
	// perform below operation
	dividend = abs(dividend);
	divisor = abs(divisor);

	//using subtraction
	ll quotient = 0;
	while(dividend >= divisor){
		dividend -= divisor;
		quotient++;
	}

	//using addition
	ll quotient = 0;
	ll temp = divisor;
	while(dividend >= divisor){
		divisor += temp;
		quotient++;
	}

	disnew(quotient * sign)
}
