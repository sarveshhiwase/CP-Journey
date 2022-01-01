#include<bits/stdc++.h>
#define ll long long int
#define mod 1000000007
#define negmod(a) (a%mod + mod) % mod 
using namespace std;

// It is quite time consuming algorithm
// Time complexity of O(2^n)
// But it works great.
// a,b,c are towers which are 1,2,3

// Recurrence Relation of Tower of hanoi is
// TOH(n,a,b,c) = TOH(n-1,a,c,b) + print(a,c) + TOH(n-1,b,a,c);
void towerofhanoi(int n, int a, int b, int c){
	if(n > 0){
		// First step is to transfer n-1 disks from a to b using c
		towerofhanoi(n-1,a,c,b);
		// Second step is to just print start and end
		cout << "(" << a  << "," << c << ")" << "\n";
		// Third step is to transfer n-1 disks from b to c using a
		towerofhanoi(n-1,b,a,c);
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
	towerofhanoi(4,1,2,3);
}

