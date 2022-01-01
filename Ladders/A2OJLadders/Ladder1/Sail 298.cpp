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

ll timetaken(string s,char one,char two,ll n,ll x,ll y){
	ll first,second;
	first = second = 0;
	for(int i = 0; i < n; i++)
	{
		if(s[i] == one) first++;
		else if(s[i] == two) second++;
		if(first >= x && second >= y){
			return i + 1;
		}
	}
	return -1;
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
//cin>>t;

while(t--)
{
	solve();
}

cerr<<"time taken : "<<(float)clock()/CLOCKS_PER_SEC<<" secs"<<endl;

return 0;
}

void solve()
{
	ll n,x1,y1,x2,y2;
	cin >> n >> x1 >> y1 >> x2 >> y2;
	string s;
	cin >> s;
	ll x = abs(x2 - x1);
	ll y = abs(y2 - y1);
	if(x2 >= x1 && y2 >= y1){
		disnew(timetaken(s,'E','N',n,x,y));
	} else if(x2 >= x1 && y2 <= y1){
		disnew(timetaken(s,'E','S',n,x,y));
	} else if(x2 <= x1 && y2 >= y1){
		disnew(timetaken(s,'W','N',n,x,y));
	} else {
		disnew(timetaken(s,'W','S',n,x,y));
	}
}