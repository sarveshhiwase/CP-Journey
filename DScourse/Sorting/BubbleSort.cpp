#include<bits/stdc++.h>
#define ll long long int
#define mod 1000000007
#define negmod(a) (a%mod + mod) % mod 
using namespace std;

//Time Complexity of O(n^2)
//We can optimise it a beat, by checking a boolean 
//that any swap occured in inside loop
void bubblesort(int arr[], int n){
	bool bad = false;
	//This loop swaps the values and bubbles out 
	// the largest element to the right side of
	// an array
	for (int i = 0; i < n - 1; i++)
	{
		//This loop swaps the values and bubbles out 
		// the largest element to the right side of
		// an array of length n - i
		// reason for n - i is because we already have placed the 
		// largest element at last
		for(int j = 0; j < n - i - 1; j++)
			if(arr[j] > arr[j+1]){
				swap(arr[j],arr[j+1]);
				bad = true;
			}
		if(!bad)
			break;
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
	int sad[5] = {2,46,7,12,45};
	int n = 5;
	bubblesort(sad,n);
	for (int i = 0; i < n; i++)
	{
		cout << sad[i] << " ";
	}
}
