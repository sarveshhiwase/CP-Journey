#include<bits/stdc++.h>
#define ll long long int
#define mod 1000000007
#define negmod(a) (a%mod + mod) % mod 
using namespace std;

//Merge two sorted arrays using two pointer technique
void merger (int arr[], int s, int mid, int e){
	int p = s;
	int q = mid + 1;
	int newarr[(e-s)+1];

	int k = 0;
	for (int i = s; i <= e; i++)
	{
		// if first pointer has reached it's end
		if(p > mid){
			newarr[k++] = arr[q++];
		// if second pointer has reached it's end
		} else if(q > e){
			newarr[k++] = arr[p++];
		//Compare the two pointers values and accordingly 
		// add it to new array
		} else if(arr[p] < arr[q]){
			newarr[k++] = arr[p++];
		} else {
			newarr[k++] = arr[q++];
		}
	}
	//Copy new array elements from new one to old one
	// from s cause we want to change our original array from s
	// not from 0 or end
	int temp = s;
	for (int i = 0; i < (e - s + 1); i++)
	{
		arr[temp++] = newarr[i];
	}
}

//Mergesort
void mymergesort(int arr[],int s, int e){
	if(s >= e){
		return;
	}
	int mid = (s + e) / 2;
	//Make half of the array from start to mid
	mymergesort(arr,s,mid);
	//Make half of the array from  mid + 1 to end
	mymergesort(arr,mid+1,e);
	//This function will basically sort the array
	merger(arr,s,mid,e);
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
	int arr[7] = {465,54,45,87,15,67,478};
	mymergesort(arr,0,6);
	printarr(arr,7);
}
