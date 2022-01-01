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
	string html;
	cin >> html;
	set<char> valids;
	for(char ch = 'a'; ch <= 'z'; ch++){
		valids.insert(ch);
	}
	for(char ch = '0'; ch <= '9'; ch++){
		valids.insert(ch);
	}
	int len = html.size();
	if(len <= 3){
		disnew("Error")
	} else {
		if(html[0]  == '<' && html[1] == '/' && html[len-1] == '>'){
			int p = 2;
			int q = len - 2;
			int flag = 1;
			while(p <= q){
				if(valids.find(html[p]) == valids.end()){
					flag = 0;
					break;
				}
				p++;
			}
			if(flag)
				disnew("Success")
			else
				disnew("Error")
		} else {
			disnew("Error")
		}
	}
}
