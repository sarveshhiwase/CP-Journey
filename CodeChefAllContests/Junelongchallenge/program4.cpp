#include<bits/stdc++.h>
#define ll long long int
#define mod 1000000007
#define negmod(a) (a%mod + mod) % mod 
using namespace std;
const long long int N = 1e5;

void solve();

vector<ll> onenearestindices(N,0);
vector<ll> twonearestindices(N,0);
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
	ll n,m;
	cin >> n >> m;
	ll narr[n];
	ll marr[m];
	for (int i = 0; i < n; i++)
	{
		cin >> narr[i];
	}
	ll lastoneindex = -1;
	for (int i = 0; i < n; i++)
	{
		if(narr[i] == 1){
			lastoneindex = i;
			onenearestindices[i] = lastoneindex;
		} else {
			onenearestindices[i] = lastoneindex;
		}
	}
	ll lasttwoindex = -1;
	for (int i = n-1; i >= 0; i--)
	{
		if(narr[i] == 2){
			lasttwoindex = i;
			twonearestindices[i] = lasttwoindex;
		} else {
			twonearestindices[i] = lasttwoindex;
		}
	}
	for (int i = 0; i < m; i++)
	{
		cin >> marr[i];
	}
	for (int i = 0; i < m; i++)
	{
		int point = marr[i];
		point--;
		if(narr[point] == 2 || narr[point] == 1){
			cout << 0 << " ";
			continue;
		}
		if(point == 0){
			cout << 0 << " ";
			continue;
		}
		if(onenearestindices[point] == -1 && twonearestindices[point] == -1){
			cout << -1 << " ";
		} else if(onenearestindices[point] != -1 && twonearestindices[point] == -1){
			cout << abs(point - onenearestindices[point]) << " ";
		} else if(onenearestindices[point] == -1 && twonearestindices[point] != -1){
			cout << abs(twonearestindices[point] - point) << " ";
		} else {
			cout << min(abs(point - onenearestindices[point]),abs(twonearestindices[point] - point)) << " ";	
		}	
	}
	cout << "\n";
}
