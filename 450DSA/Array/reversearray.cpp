#include<bits/stdc++.h>
#include <iostream>
using namespace std;
void solve();

void reverseArray(int*,int, int);

void printArray(int*, int);

void reverseArrayIterative(int*,int, int);

int main()
{
ios_base::sync_with_stdio(false);cin.tie(NULL);

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
	int n;
	cin >> n;
	int arr[n] = {0};
	for(int i = 0; i < n; i++){
		cin >> arr[i];
	}
	// reverseArray(arr,0,n-1);
	reverseArrayIterative(arr,0,n-1);
	printArray(arr,n);
}

//Recursive approach
void reverseArray(int arr[],int start, int end)
{
	if(start >= end){
		return;
	}
	int temp = arr[start];
	arr[start] = arr[end];
	arr[end] = temp;
	return reverseArray(arr,start+1, end -1 );
}

//Iterative approach
void reverseArrayIterative(int arr[],int start,int end){
	for(int i = start; i < end; i++){
		int temp = arr[i];
		arr[i] = arr[end];
		arr[end] = temp;
		end--;
	}
}

//Printing the whole array
void printArray(int arr[],int n){
	for (int i = 0; i < n; ++i)
	{
		cout << arr[i] << " ";
	} 
	cout << "\n";
}