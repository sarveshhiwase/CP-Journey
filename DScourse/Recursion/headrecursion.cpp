#include<bits/stdc++.h>

using namespace std;

// Head recursion is recursion in which recursive call is made at first statement and every
// other statement is executed after the function has returned
// A must condition - Recursive call should be FIRST.
void headrecursion(int n){
	if(n > 0){
		headrecursion(n-1); // After function is returned all next statements are executed
		cout << n << endl;
	}
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
	headrecursion(5);
}
