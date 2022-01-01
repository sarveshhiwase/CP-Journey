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
	int n;
	string country;
	cin >> n >> country;
	// cout << n << country;
	int totalladdus = 0;
	int contestwon = 300;
	int topcontri = 300;
	int contesthost = 50;
	for (int i = 0; i < n; i++)
	{
		string sad;
		cin >> sad;
		if(sad == "CONTEST_WON"){
			int x;
			cin >> x;
			totalladdus += contestwon;
			if(x <= 20){
				totalladdus += (20 - x);
			} 
		} else if(sad == "TOP_CONTRIBUTOR") {
			totalladdus += topcontri;
		} else if(sad == "CONTEST_HOSTED"){
			totalladdus += contesthost;
		} else {
			int x;
			cin >> x;
			totalladdus += x;
		}
	}
	// cout << totalladdus << endl;
	if(country == "INDIAN"){
		cout << totalladdus / 200 << endl;
	} else {
		cout << totalladdus / 400 << endl;
	}
}
