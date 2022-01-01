#include<bits/stdc++.h>
#define ll long long int
#define mod 1000000007
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
	// cout << "********************" << endl;
	long long int x,y;
	cin >> x >> y;
	long long int a,b;
	cin >> a >> b;
	// cout << x << " " << y << " " << a << " " << b << endl;
	if(x == 0 && y == 0){
		cout << 0 << endl;
	} else {
		if(x == y){
			cout << min(x*b,2*x*a) << endl;
		} else if(x > y){
			cout << min((x+y) * a,(x-y) * a + (y) * b) << endl;
		} else {
			cout << min((x+y) * a,(y-x) * a + (x) * b) << endl;
		}
	}
	// cout << "********************" << endl;
}


//Editorial
// Let's presume that x≥y. Then there are two cases in the problem:
// 1.If a+a≤b then we have to x+y times perform the first operation. 
// So the answer is (x+y)⋅a;
// 2.If a+a>b then we have to y times perform the second operation,
// and pass the remaining distance by performing the first operation.
// So the answer is y⋅b+(x−y)⋅a.