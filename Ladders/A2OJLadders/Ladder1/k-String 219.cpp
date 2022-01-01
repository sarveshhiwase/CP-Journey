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
	//first of count all the characters 
	// and get their respective counts and if they are not same and also not equal to k
	//answer is -1
	ll k;
	cin >> k;
	string s;
	cin >> s;
	vector<int> frequency(26,0);
	int len = s.size();

	for(int i = 0; i < len; i++)
	{
		frequency[s[i]-'a']++;
	}
	for(int i = 0; i < 26; i++)
	{
		if(frequency[i] && frequency[i] % k != 0){
			disnew("-1")
			return;
		}
	}
	string answer = "";
	for(int i = 0; i < 26; i++)
	{
		if(frequency[i]){
			for(int j = 0; j < frequency[i]/k; j++){
				answer += i + 97;
			}
		}
	}
	string temp = answer;
	for(int i = 0; i < k - 1; i++)
	{
		answer += temp;
	}
	disnew(answer)
}