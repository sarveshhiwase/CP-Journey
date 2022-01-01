#include<bits/stdc++.h>
#define ll long long int
#define mod 1000000007
#define negmod(a) (a%mod + mod) % mod 
using namespace std;

// Insertion sort is better than selection sort and bubble sort
// as the number of swaps are very less and we check for sorted condition also

void insertionsort(int v[],int n){
	for(int i = 1; i < n; i++){
		// We are taking current element and comparing it
		// with previous sorted ones
		int temp = v[i];
		int j = i - 1;
		// This loop basically shifts the larger elements than
		// the current one to the right side.
		while(j >= 0 && v[j] > temp){
			v[j+1] = v[j];
			j--;
		}
		// This switch is just basically switching the last element
		v[j+1] = temp;
		for (int i = 0; i < 5; i++)
		{
			cout << v[i] << " ";
		}
		cout << "\n";
	}
}

void printarr(int arr[],int n){
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
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
	int sad[5] = {46,45,12,2,1};
	int n = 5;
	insertionsort(sad,n);
	printarr(sad,5);
}
