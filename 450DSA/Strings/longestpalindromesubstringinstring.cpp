#include<bits/stdc++.h>
#define ll long long int
#define mod 1000000007
#define negmod(a) (a%mod + mod) % mod 
using namespace std;

bool isPalindrome(string s){
	string temp = s;
	for (int i = 0; i < s.length()/2; i++)
	{
		swap(s[i],s[s.length()-i-1]);
	}
	return temp == s;
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
	// cout << isPalindrome(s) << "\n";
	int len = s.length();
	vector<pair<int,string>> palins;
	for(int i = 0; i < len - 1; i++){
		string tp = "";
		tp += s[i];
		palins.push_back({tp.size(),tp});
		for(int j = i + 1; j < len; j++){
			tp += s[j];
			if(isPalindrome(tp)){
				palins.push_back({tp.size(),tp});
			}
		}
	}
	sort(palins.begin(),palins.end());
	int palinlength = palins.size();
	string final = palins[palinlength-1].second;
	for (int i = 0; i < palinlength; i++)
	{
		cout << palins[i].second << "\n";
	}
}
