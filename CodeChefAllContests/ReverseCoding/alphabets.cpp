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
	int a,b;
	cin >> a >> b;
	char alphabets[26] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
	// a are rows and b are columns;
	for (int i = 0; i < b; i++)
	{
		cout << alphabets[i%26] << " ";
	}
	cout << "\n";
	int start = 1;
	for (int i = 1; i < a; i++)
	{
		for(int j = 0; j < b; j++){
			cout << alphabets[(j+start)%26] << " ";
		}
		start += 1;
		cout << "\n";
	}
}
