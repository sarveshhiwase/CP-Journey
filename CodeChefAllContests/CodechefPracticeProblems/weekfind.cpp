#include<bits/stdc++.h>
#define ll long long int
#define mod 1000000007
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
	string day;
	ll n;
	cin >> day >> n;

	string arr[7] = {"monday","tuesday","wednesday","thursday","friday","saturday","sunday"};
	ll ind = 0;
	for (int i = 0; i < 7; i++)
	{
		if(arr[i] == day){
			ind = i;
			break;
		}
	}
	cout << arr[(ind + n)% 7] << "\n";

}
