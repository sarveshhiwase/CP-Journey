#include<bits/stdc++.h>

using namespace std;

void solve();

void rotatestring(string &sad){
	//abcde
	//bcdea
	char first = sad[0];
	for (int i = 0; i <= sad.length()-1; i++)
	{
		sad[i] = sad[i+1];
	}
	sad[sad.length()-1] = first;
}

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
	int n,k;
	cin >> n >> k;
	string sad = "";
	char alphabets[26] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
	for (int i = 0; i < n; i++)
	{
		sad += alphabets[i];
	}
	cout << sad << endl;
	for (int i = 0; i < k-1; i++)
	{
		rotatestring(sad);
		cout << sad << endl;
	}
}
