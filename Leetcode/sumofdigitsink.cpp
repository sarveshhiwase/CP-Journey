#include<bits/stdc++.h>

using namespace std;

string converttobasek(int n,int k){
	// n is decimal no.
	int x;
	string newno = "";
	while(n){
		x = n % k;
		newno += to_string(x);
		n /= k;
	}
	// cout << newno << endl;
	reverse(newno.begin(), newno.end());
	// cout << newno << endl;
	return newno;
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
	int n,k;
	cin >> n >> k;
	string sad = converttobasek(n,k);
	cout << stoi(sad) << endl;
}
