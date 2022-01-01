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


//Diagonal matrices are those whose all elements except 
// the diagonal ones are zeroes
// for ex. 1 0 0
			  //  0	2 0
				//0	0 3
// diagonal matrix in general form is M[i,j] where i == j and A[i][j] != 0

//Actually we can do lot better if we don't store zeroes
//we can improve our space consumption and stop our wastage
// of computing on zero elements
// So we only store those elements which are non - zero
// in a single-dimension array 
class DiagonalMatrix
{
private:
	int n;
	int *A;
public:
	DiagonalMatrix(int len){
		n = len;
		A = new int[len];
	}
	~DiagonalMatrix(){
		delete []A;
	}
	void set(int i, int j, int x){
		if(i == j)
			A[i-1] = x;
	}
	int get(int i, int j){
		if(i == j){
			return A[i-1];
		}
		return 0;
	}
	void printMatrix(){
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < n; j++)
			{
				if(i == j){
					dis(A[i])
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
	DiagonalMatrix m1(4);
	m1.set(1,1,2);
	m1.set(2,2,5);
	m1.set(3,3,9);
	m1.set(4,4,8);
	disnew(m1.get(4,4)) 
	m1.printMatrix();

}
