#include<bits/stdc++.h>

using namespace std;

void solve();

int binarySearch(int*,int,int,int);

int binarySearchIterative(int*,int,int,int);

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
cin>>t;
while(t--)
{
	solve();
}

cerr<<"time taken : "<<(float)clock()/CLOCKS_PER_SEC<<" secs"<<endl;
return 0;
}


void solve()
{
	int n,k;
	cin >> n >> k;
	int arr[n];
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	cout << binarySearch(arr,0,n-1,k) << endl;
	cout << binarySearchIterative(arr,0,n-1,k) << endl;


}


// Recursive Binary Search
int binarySearch(int arr[],int start,int end,int k){
	if(start <= end){
		int mid = (end + start)/2;
		if(arr[mid] == k){
			return mid;
		} 
		if(arr[mid] > k){
			return binarySearch(arr,start,mid - 1,k);
		} 
		return binarySearch(arr,mid+ 1,end,k);
		 
	}
	return -1;
}

//Iterative Binary Search
int binarySearchIterative(int arr[],int start,int end,int k){
	while(end >= start){
		int mid = (start + end)/2;
		if(arr[mid] == k){
			return mid;
		}
		if(arr[mid] > k){
			end = mid - 1;
		} else {
			start = mid + 1;
		}
	}
	return -1;
}



