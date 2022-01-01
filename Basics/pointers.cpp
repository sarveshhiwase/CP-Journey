#include<bits/stdc++.h>
using namespace std;

#ifndef sarvesh
#define sarvesh 21
#endif

void solve();
int main()
{
ios_base::sync_with_stdio(false);cin.tie(NULL);

#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("error.txt", "w", stderr);
freopen("output.txt", "w", stdout);
#endif

int t=1;
// cin>>t;
while(t--)
{
	solve();
	cout<<"\n";
}

cerr<<"time taken : "<<(float)clock()/CLOCKS_PER_SEC<<" secs"<<endl;
return 0;
}
void solve()
{
	int sad = 43;
	int *ptr;
	ptr = &sad;
	cout << *ptr << endl;
	cout << ptr << endl;
	cout << &ptr << endl;
	cout << &sad << endl;
	cout << sarvesh << endl;


}
