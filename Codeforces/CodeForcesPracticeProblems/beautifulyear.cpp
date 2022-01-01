#include<bits/stdc++.h>

using namespace std;

bool isDistinct(int n){
	string sad = to_string(n);
	unordered_set<int> bad;
	for (int i = 0; i < sad.length(); i++)
	{
		bad.insert(sad[i]);
	}
	return bad.size() == sad.length();
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
	n++;
	while(!isDistinct(n)){
		n++;
	}
	cout << n << endl;
}
