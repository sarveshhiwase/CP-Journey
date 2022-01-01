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
	ll len = sad.size();
	unordered_set<char> bad;
	unordered_map<char,int> lad;
	for (int i = 0; i < len; i++)
	{
		bad.insert(sad[i]);
		lad[sad[i]]++;
	}
	ll count = 0;
	for(auto j:lad){
		if(j.second > 2){
			count += bad.size() - 1;
			count += 1;
		} else if(j.second == 2){
			count += bad.size() - 1;
		}
	}
	cout << count << "\n";
}
