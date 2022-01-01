#include <bits/stdc++.h>

using namespace std;

int countinarr(int arr[],int n,int element){
	int count = 0;
	for(int i=0; i < n; i++){
		if(arr[i] == element){
			count++;
		}
	}
	return count;
}

int main(){
	int n;
	cout << "Enter no. of elements in array" << endl;
	cin >> n;
	int sad[n];
	for(int i = 0; i < n; i++){
		cin >> sad[i];
	}
	
	return 0;
}