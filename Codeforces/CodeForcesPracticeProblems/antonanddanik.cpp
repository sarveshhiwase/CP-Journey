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
	int dcount = 0;
	int acount = 0;
	for (int i = 0; i < n; i++)
	{
		if(sad[i] == 'D')
			dcount++;
		else
			acount++;
	}
	if(acount > dcount)
		cout << "Anton" << endl;
	else if(acount == dcount)
		cout << "Friendship" << endl;
	else
		cout << "Danik" << endl;
}
