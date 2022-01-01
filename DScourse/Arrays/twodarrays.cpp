#include<bits/stdc++.h>
#define ll long long int
#define mod 1000000007
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

void solve()
{
	ll n;
	cin >> n;
	int bad[n] = {0};
	// 2d Arrays are basically normal linear arrays which helps 
	// programmer to layout a table like structure for his code
	// for example matrix representation
	// implementation
	int arri[3][4];
	// This creates a 2d array with 3 rows and 4 columns
	// But underthe hood it's same as linear array
	// but language supports to access an element with row no. and 
	// column no.
	// This array will completely be allocated in stack memory

	int *arr[3];
	// This is normal array of integer pointers
	// which is allocated in stack memory
	// so now we will use heap to store columns for our program
	arr[0] = new int[4];
	arr[1] = new int[4];
	arr[2] = new int[4];
	// Now we have a 2d array which is partially in stack and heap memory


	// This is complete 2d array which located in heap with help of two
	// pointer
	// First we create double pointer which points to array of pointers
	// in heap
	// and then we make each element of array to point to new array
	// again in heap memory
	int **a;
	a = new int*[3];
	a[0] = new int[4];
	a[1] = new int[4];
	a[2] = new int[4];


	// How 2d arrays are mapped to a linear array
	//-> They use two types of representation i.e
	// 1.Row major mapping 
	// 2.Column major mapping


	// IN row major mapping,
	// compilers calculate address of an element with respect to an
	// row, means the elements are filled row wise in a linear array
	//for ex- A[i][j] = Lo + (i * n + j) * w;
	// i is the index
	// w is data type size
	// Lo is base address of an array, i.e first element address
	// n is column size and m is row size
	// We come from left to right

	// IN column major mapping,
	// compilers calculate address of an element with respect to an
	// row, means the elements are filled column wise in a linear array
	//for ex- A[i][j] = Lo + (i + j * m) * w;
	// i is the index
	// w is data type size
	// Lo is base address of an array, i.e first element address
	// n is column size and m is row size
	// We come from right to left

}
