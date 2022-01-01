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
	bool flag = true;
	int len = s.size();
	int i;
	for (i = 0; i < len - 2; i++)
	{
		if(s[i] == '1' && s[i+1] == '4' && s[i+2] == '4'){
			i+=2;
		} else if(s[i] == '1' && s[i+1] == '4'){
			i++;
		} else if(s[i] != '1'){
			flag = false;
			break;
		} 
	}
	if(i == len - 1){
		if(s[i] != '1') flag = false;
	}
	if(i == len - 2){
		if(s[i] != '1'){
			flag = false;
		} else if((s[i+1] != '1' && s[i+1] != '4')){
			flag = false;
		}
	}
	if(flag)
		disnew("YES")
	else
		disnew("NO")
}