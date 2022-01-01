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
	ll n;
	cin >> n;
	ll arr[n];
	ll fives,zeroes;
	fives = zeroes = 0;
	for(int i = 0; i < n; i++)
	{
		cin >> arr[i];
		if(arr[i] == 5) fives++;
		else zeroes++;	
	}
	string answer = "";
	ll t = fives / 9;
	for(int i = 0; i < t * 9; i++)
	{
		answer += '5';
	}
	for(int i = 0; i < zeroes; i++)
	{
		answer += '0';
	}
	if(t && zeroes)
		disnew(answer)
	else if(!t && zeroes)
		disnew(0)
	else
		disnew(-1)
}