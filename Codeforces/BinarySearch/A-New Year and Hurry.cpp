//Problem url 
 //https://codeforces.com/problemset/problem/750/A
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
	ll problems,time_to_reach;
  	cin >> problems >> time_to_reach;
  	vector<ll> possibleproblems;
  	ll i = 1;
  	ll sum = 0;
  	while((sum + (5 * i)) < 240){
    	sum += 5 * i;
    	possibleproblems.push_back(sum);
    	i++;
  	}
  	ll total_time_to_solve = 240 - time_to_reach;
  	int solved = upper_bound(possibleproblems.begin(), possibleproblems.end(),total_time_to_solve) - possibleproblems.begin();
  	if(solved >= problems){
    	disnew(problems)
    	return;
  	}
  	disnew(solved)
}