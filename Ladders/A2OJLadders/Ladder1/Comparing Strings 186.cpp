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

int t=1;
//cin>>t;

while(t--)
{
	solve();
}

return 0;
}

void solve()
{
	string s,t;
	cin >> s;
	cin >> t;
	if(s.size() == t.size()){
		int i = 0;
		int pos = 0;
		int a,b;
		while(i < s.size()){
			if(s[i] != t[i]){
				if(pos){
					b = i;
				} else {
					a = i;
				}
				pos++;
			}
			i++;
		}
		if(pos == 2) {
			swap(s[a],s[b]);
			if(s == t){
				disnew("YES")
				return;
			}
		}
	}
	disnew("NO")
}