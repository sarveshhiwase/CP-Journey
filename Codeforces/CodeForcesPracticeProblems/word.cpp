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
	int upcount = 0;
	int lowcount = 0;
	for (int i = 0; i < sad.length(); i++)
	{
		int tp = sad[i];
		if(tp >= 97 && tp <= 122){
			lowcount++;
		} else {
			upcount++;
		}
	}
	if(upcount <= lowcount){
		transform(sad.begin(),sad.end(),sad.begin(),::tolower);
	} else {
		transform(sad.begin(),sad.end(),sad.begin(),::toupper);
	}
	cout << sad << endl;
}
