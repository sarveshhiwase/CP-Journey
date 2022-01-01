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
	string sad;
	cin >> sad;
	//Greedy choice would be to check most largest even place and
	// odd digit and make respective swaps and consider all 
	// three strings
	// highest odd digit
	char max = '0';
	int ind = 0;
	for (int i = 0; i < sad.length(); i+=2)
	{
		if((int)sad[i] > (int)max){
			max = sad[i];
			ind = i;
		}
	}
	// swap required pos 
	string bad = sad;
	swap(bad[0],bad[ind]);
	max = '0';
	ind = 0;
	for (int i = 1; i < sad.length(); i+=2)
	{
		if((int)sad[i] > (int)max){
			max = sad[i];
			ind = i;
		}
	}
	// swap required pos 
	string dad = sad;
	swap(dad[1],dad[ind]);

	if(sad[0] >= bad[0] && sad[1] >= bad[1] && sad[1] >= dad[1]  && sad[0] >= dad[0]){
		cout << sad << endl;
	} else if(bad[0] >= sad[0] && bad[1] >= sad[1] && bad[0] >= dad[0] && bad[1] >= dad[1]){
		cout << bad << endl;
	} else {
		cout << dad << endl;
	}
}
