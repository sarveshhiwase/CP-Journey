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
	string sad;
	cin >> sad;
	vector<char> bad;
	for (int i = 0; i < sad.length(); i++)
	{
		if(sad[i] != '+'){
			bad.push_back(sad[i]);
		}
	}
	sort(bad.begin(),bad.end());
	for (int i = 0; i < bad.size()-1; i++)
	{
		cout << bad[i];
		cout << '+';
	}
	cout << bad[bad.size()-1];
}
