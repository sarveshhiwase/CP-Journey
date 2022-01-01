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

while(t--)
{
	solve();
}

cerr<<"time taken : "<<(float)clock()/CLOCKS_PER_SEC<<" secs"<<endl;

return 0;
}

void solve()
{
	string sad;
	cin >> sad;
	// first will be jane i.e odd no. will be jane
	// second will be tanner i.e even no.
	unordered_map<char,ll> values;
	ll k = 26;
	for (char i = 'a'; i <= 'z' ;i++)
	{
		values[i] = k--;
	}
	ll chance = 1;
	ll start = 0;
	ll end = sad.size() - 1;
	ll janes = 0;
	ll tanners = 0;
	while(start < end){
		ll points = 0;
		if(values[sad[start]] > values[sad[end]]){
			points = values[sad[start]];
			start++;
		} else {
			points = values[sad[end]];
			end--;
		}
		if(chance & 1){
			janes += points;
		} else {
			tanners += points;
		}
		chance++;
	}
	cout << values['t'] << "\n";
	cout << janes << "\n";
}
