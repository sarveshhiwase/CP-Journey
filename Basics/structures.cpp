#include<bits/stdc++.h>
using namespace std;

void solve();

struct MyComplex
{
	int real;
	int imaginary;
};

int main()
{
ios_base::sync_with_stdio(false);cin.tie(NULL);

#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("error.txt", "w", stderr);
freopen("output.txt", "w", stdout);
#endif

int t=1;
/*is Single Test case?*/cin>>t;
while(t--)
{
	solve();
	// cout<<"\n";
}

cerr<<"time taken : "<<(float)clock()/CLOCKS_PER_SEC<<" secs"<<endl;
return 0;
}
void solve()
{
	struct MyComplex s[20]; 
	struct MyComplex sumresult = {0,0};
	int n;
	cin >> n;
	// cout << n << "\n";
	for (int i = 0; i < n; i++)
	{
		cin >> s[i].real >> s[i].imaginary;
		// cout << s[i].real << " " << s[i].imaginary << " " << i << endl;
		sumresult.real += s[i].real;
		sumresult.imaginary += s[i].imaginary;
	}
	cout << sumresult.real << " + i" << sumresult.imaginary << endl; 
}
