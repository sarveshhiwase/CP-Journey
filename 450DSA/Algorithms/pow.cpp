#include<bits/stdc++.h>

using namespace std;

void solve();


//Recursive approach
int pow(int a, int n){
	if(n == 1){
		return a;
	}
	if(n % 2 == 0) 
		return pow(a,n/2) * pow(a,n/2);
	return a * pow(a,n/2) * pow(a,n/2);
}

//Iterative approach
int powiterative(int a , int n){
	int ans = 1;
	while(n > 0){
		if(n & 1){
			ans = ans * a;
		}
		n /= 2;
		a = a * a;
	}
	return ans;
}

ll powiterative(ll a , ll n){
	ll ans = 1;
	while(n > 0){
		if(n & 1){
			ans = ((ans % mod) * (a % mod)) % mod;
		}
		n /= 2;
		a = ((a % mod) * (a % mod)) % mod;
	}
	return ans;
}

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
	cout << pow(n,7) << endl;
	cout << powiterative(n,7) << endl;

}
