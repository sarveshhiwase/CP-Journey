#include<bits/stdc++.h>
#define ll long long int
#define mod 1000000007
#define add insert
#define pb push_back 
#define rep(start,n) for(int i = start; i < n; i++)
#define dis(x) cout << x << " "; 
#define disnew(x) cout << x << "\n"; 
#define negmod(a) (a%mod + mod) % mod 
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


// toeplitz matrix is matrix where all diagonal possible are having
// same elements
// for example
 //  M = 1  2   3 
				\	\
		// 2  1   2
				\	\
		// 3  2   1	

// as all elements are same, so we can save space and time by 
// just storing first row and first column elements in a single array

void solve()
{
	// program to check valid toeplitz matrix
	for(int row=0;row<matrix.size()-1;row++) {
            for(int cols =0;cols<matrix[0].size()-1;cols++) {
                if(matrix[row+1][cols+1]!=matrix[row][cols]) 
                	return false;
            }
        }
    return true;
}