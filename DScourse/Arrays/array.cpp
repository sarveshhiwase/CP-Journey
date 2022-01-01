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
	// Basic array declaration which declares a array with garbage values,
	// it is created in stack memory, not in a heap.
	// If we want to create a dynamic array we can use heap
	// To use heap memory we need pointer

	int A[5];
	int *p;
	p = new int[5]; // new keyword automatically allocates the memory
	// and converts it to the type we mentioned.
	p[0] = 2;
	p[1] = 4;
	p[2] = 6;
	p[3] = 8;
	p[4] = 10;
	for (int i = 0; i < 5; i++)
	{
		cout << p[i] << " ";
	}
	//Static array vs dynamic array
	// static arrays are those arrays which size is declared at compile time
	// but dynamic arrays are those arrays which size is declared at 
	// runtime and can be resized accordingly.
	// Dynamic arrays are only possible in heap memory.
	// when we say dynamic arrays are resizable we are not talking about
	// same array but we would create a new bigger required size
	// array, make old pointer to point to new one and then make new one
	// point to null and discard the old to avoid memory leaks.
	// Below is the implementation

	int *s = new int[5];
	// We wanted to have a greater size so we create a big size array
	int *a = new int[10];
	//copy all the old one's elements to new one and discard it
	// here we don't have anything beside garbage so we would not 
	// copy old elements here
	// so we would directly assign the old one to new one
	//like this,
	delete []s;
	s = a;
	a = NULL;
	// this steps would get you a nice working array
	// WHY ARRAYS ARE NOT RESIZABLE
	// -> as arrays are continously allocated blocks of memory
	// once allocated, we cannot surely tell that the next block to 
	// last block array can be used by us. so we cannot resize
	// instead we create a new bigger one.

	//Delete all heap memory that are allocated to avoid any memory leaks
	delete a;
	delete []p;
	delete []s;

	// How compiler calculates address of any element of an array
	//-> Address cannot be allocated at compile time, it has to be
	// done in runtime, so compilers uses this formula to calculate 
	// address of an element
	// A[i] = Lo + i * w;
	// i is the index
	// w is data type size
	// Lo is base address of an array, i.e first element address

	//Why Cpp/C does not support 1 indexed arrays?
	//-> The reason is simple if use above formula with 1 based
	// indexing we get following formula-
	// A[i] = Lo + (i - 1) * w;
	// i is the index
	// w is data type size
	// Lo is base address of an array, i.e first element address
	// When input size is very large, no. of arithmetic operations
	// increase, so it's time consuming and slower

	
}
