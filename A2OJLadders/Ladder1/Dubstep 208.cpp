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
	string s;
	cin >> s;
	int len = s.size();
	//skip all the wub parts
	//pure implementation
	vector<string> original_mix;
	int i;
	string temp = "";
	for(i = 0; i < len - 2; i++)
	{
		if(s[i] == 'W' && s[i+1] == 'U' && s[i+2] == 'B'){
			if(!temp.empty()) original_mix.push_back(temp);
			temp = "";
			i += 2;
		} else {
			temp += s[i];
		}
	}
	if(i != len) {
		temp += s[i++];
		if(i != len)
			temp += s[i++];
		original_mix.push_back(temp);
	}
	string answer = "";
	for(int i = 0; i < original_mix.size() - 1; i++)
	{
		answer += original_mix[i];
		answer += ' ';
	}
	answer += original_mix[original_mix.size() - 1];
	disnew(answer)
}