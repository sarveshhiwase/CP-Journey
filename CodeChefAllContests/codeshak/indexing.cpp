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
	string sad;
	cin >> sad;
	unordered_map<char,int> bad;
	int j = 1;
	for(char i = 'a'; i <= 'z'; i++){
		bad[i] = j;
		j++;
	}
	ll sum = 0;
	for (int i = 0; i < sad.length(); i++)
	{
		sum += bad[sad[i]];
	}
	if(sum & 1){
		cout << "NO" << "\n";
	} else {
		cout << "YES" << "\n";
	}
}
