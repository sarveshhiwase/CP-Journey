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

int counter = 0;

void subsequences(string s,int i,string t){
	if(i == s.size()){
		counter++;
		disnew(t)
	} else {
		subsequences(s,i+1,t);
		t += s[i];
		subsequences(s,i+1,t);
	}
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


return 0;
}

void solve()
{
	string s = "aaabc";
	subsequences(s,0,"");
	disnew(counter)
}
