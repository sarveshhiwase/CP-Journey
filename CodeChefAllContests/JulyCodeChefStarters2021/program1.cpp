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
	int r1,w1,c1;
	cin >> r1 >> w1 >> c1;
	int r2,w2,c2;
	cin >> r2 >> w2 >> c2;
	int acount,bcount;
	acount = bcount = 0;
	if(r1 > r2){
		acount++;
	} else {
		bcount++;
	}
	if(w1 > w2){
		acount++;
	} else {
		bcount++;
	}
	if(c1 > c2){
		acount++;
	} else {
		bcount++;
	}
	if(acount > bcount){
		disnew("A")
	} else {
		disnew("B")
	}
}
