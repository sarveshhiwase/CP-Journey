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

//Lower triangular matrices are those whose upper elements
 // are zeroes
// for ex. 1 0 0
			  //  1	2 0
				//2	6 3
//Lower triangular in general form is M[i,j] where i >= j and A[i][j] != 0

// Total elements stored here are n*n(square matrix);
// Total non zero elements are n*(n+1)/2;

//Two types of mapping is possible
// 1.Row major mapping
// all elements are stored row wise in 1d array
// for ex - [|1|,|1,2|,|2,6,3|]
				//  row1   row2      row3
// say if you wanted to access the element at (2,1)
// so row major mapping formula is for finding index in 1d array
// Index(A[i][j]) = i * (i - 1) / 2 + (j - 1);
// for any i we go upto the sum of (i - 1) natural no's 
// Key note here is that we are using 1based indexing for i and j


// 2.Column major mapping
//  all elements are stored column wise in 1d array
// for ex - [|1,1,2|,|2,6|,|3|]
					//  col1       col2    col3
// say if you wanted to access the element at (2,1)
// so column major mapping formula is for finding index in 1d array
// Index(A[i][j]) = n*(j-1)/2 + (j-2)*(j-1)/2 + (i - j);
// for any j we go upto n - j - 2 sums from n


class Lowertriangularmatrix
{
	private:
		int *A;
		int n;
	public:
		Lowertriangularmatrix(int size){
			n = size;
			A = new int[(size*(size+1))/2];
		}
		~Lowertriangularmatrix(){
			delete []A;
		}	
		void set(int i,int j,int x){
			if(i >= j){
				A[(i * (i - 1)) / 2 + (j - 1)] = x;
			} 
		}
		int get(int i, int j){
			if(i >= j){
				return A[(i * (i - 1)) / 2 + (j - 1)];
			}
		}
		void printMatrix(){
			for (int i = 1; i <= n; i++)
			{
				for (int j = 1; j <= n; j++)
				{
					if(i >= j){
						dis(A[(i * (i - 1)) / 2 + (j - 1)])
					} else {
						dis(0)
					}
				}
				cout << "\n";
			}
		}
};

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
	Lowertriangularmatrix m(4);
	int x;
	for (int i = 1; i <= 4; i++)
	{
		for (int j = 1; j <= 4; j++)
		{
			cin >> x;
			m.set(i,j,x);
		}
	}
	m.printMatrix();
}
