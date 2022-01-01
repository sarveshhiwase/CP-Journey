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
	unordered_map<char,int> bad;

	int first,second,third,fourth,fifth,sixth;
	first = second = third = fourth = fifth = sixth = 0;

	int len = sad.length();
	for (int i = 0; i < len; i++)
	{
		if(sad[i] == 'e' && i != 0 && i != len-1){
			fifth = 1;
		} else if(sad[i] == 'E' && i != 0 && i != len-1){
			sixth = 1;
		}
		bad[sad[i]]++;
	}
	if(bad['C']){
		first = 1;
	} 
	if(bad['o']){
		second = 1;
	}
	if(bad['D']){
		third = 1;
	} 
	if(bad['e']){
		fourth = 1;	
	}
	if(bad['E']){
		fifth = 1;
	}
	if(first && second && third && fourth && fifth && sixth){
		cout << "SELECTED" << "\n";
	} else {
		cout << "REJECTED" << "\n";
	}
}
