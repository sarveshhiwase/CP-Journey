#include<bits/stdc++.h>

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

while(t--)
{
	solve();
}

cerr<<"time taken : "<<(float)clock()/CLOCKS_PER_SEC<<" secs"<<endl;

return 0;
}

void solve()
{
	int n;
	cin >> n;
	string sad;
	cin >> sad;
	unordered_map<string,int> bad;
	for (int i = 0; i < n-1; i++)
	{
		string tp = sad.substr(i,2);
		bad[tp]++;
	}
	pair<string,int> maxpair("",0);
	for(auto j : bad){
		if(j.second > maxpair.second){
			maxpair.first = j.first;
			maxpair.second = j.second;
		}
	}
	cout << maxpair.first << endl;
}
