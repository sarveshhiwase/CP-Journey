#include<bits/stdc++.h>
#define ll long long int
#define mod 1000000007
#define negmod(a,m) (a%m + m) % m

using namespace std;

//Tail recursion is recursion in which recursive call is made to function at last statement and at 
//returning phase there is no statement to execute
// A must condition is that recursive call should be last statement
// Ex- tailrecurison(n-1) + n; is not a tail recursion as it needs
// a value of function call that is made and after returning a value
// we can execute this. // This would be a normal recursion
void tailrecursion(int n){
	if(n > 0){
		cout << n << endl;
		tailrecursion(n-1); // After Returning Function ends
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
	tailrecursion(5);
	cout << negmod(-5,2) << endl; // Modulo of a negative number
}

