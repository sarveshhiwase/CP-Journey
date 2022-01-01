#include<bits/stdc++.h>
#define ll long long int
#define mod 1000000007
#define negmod(a) (a%mod + mod) % mod 
using namespace std;

// Brute force algo
double epower(double x,double n){
	static double p = 1;
	static double f = 1;
	double r;
	if(n == 0){
		return 1;
	} 
	r = epower(x,n-1);
	p = p * x;
	f = f * n;
	return r + p/f;
}

//Optimized Horner's algo for taylor series
double epowerhorner(double x,double n){
	static double s = 1;
	if(n == 0)
		return s;
	s = 1 + (x / n) * s;
	return epowerhorner(x,n-1);
}

double epowerhorneriterative(double x, double n){
	double s = 1;
	for (; n > 0 ;n--)
	{
		s = 1 + (x / n) * s;
	}
	return s;
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
	cout << epower(2,5) << endl;
	cout << epowerhorner(2,5) << endl;
	cout << epowerhorneriterative(2,5) << endl;



}
