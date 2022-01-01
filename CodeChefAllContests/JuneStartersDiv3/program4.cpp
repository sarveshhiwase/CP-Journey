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

bool choosethisordont(vector<int> sad,int start,int end,int h){
	if(start > end){
		return false;
	}
	if(start <= end && sad[start] >= h){
		return true;
	} 
	return (choosethisordont(sad,start+1,end,h) || choosethisordont(sad,start+1,end,2*(h-sad[start])));
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
	ll l,h;
	cin >> l >> h;
	string sad;
	cin >> sad;
	vector<int> continouszeroes;
	int thiszerocount = 0;
	for (int i = 0; i < l; i++)
	{
		if(sad[i] == '0'){
			thiszerocount++;
		} else {
			if(thiszerocount)
				continouszeroes.push_back(thiszerocount);
			thiszerocount = 0;
		}
	}
	if(thiszerocount)
		continouszeroes.push_back(thiszerocount);
	if(continouszeroes.size() == 0){
		disnew("NO")
		return;
	}

	int maxele = INT_MIN;
	int maxindex = -1;
	for (int i = 0; i < continouszeroes.size(); i++)
	{	
		if(continouszeroes[i] > maxele){
			maxele = continouszeroes[i];
			maxindex = i;
		}
	}
	if(maxele >= h){
		disnew("YES")
		return;
	}

	set<ll> maxindices;
	int maxindexi = continouszeroes.size() - 1;
	int maxno = -1;
	for (int i = continouszeroes.size() - 1; i >= 0; i--)
	{
		if(continouszeroes[i] > maxno){
			maxno = continouszeroes[i];
			maxindexi = i;
			maxindices.insert(i);
		}
	}

	bool cansleep = false;
	for(auto j:maxindices){
		if(continouszeroes[j] >= h){
			cansleep = true;
			break;
		} else {
			h = 2 * (h - continouszeroes[j]);
		}
	}
	if(cansleep)
		disnew("YES")
	else
		disnew("NO")
}
