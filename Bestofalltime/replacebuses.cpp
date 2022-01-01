//Sap Labs
#include<bits/stdc++.h>
using namespace std;

int replacebuses(vector<pair<int,int>> arr){
	int replacecount = 1;
	int first = arr[0].first;
	int second = arr[0].second;
	int len = arr.size();

	for (int i = 1; i < len; i++)
	{
		if(!(first <= arr[i].first && second >= arr[i].first)){
			cout << first << " " << second << "\n";
			first = arr[i].first;
			replacecount++;
		} else {
			first = min(first,arr[i].first);
		}
		second = max(second,arr[i].second);
	}
	cout << first << " " << second << "\n";
	return replacecount;
}

int main(){
	int n;
	cin >> n;
	vector<pair<int,int>> arr(n);
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i].first >> arr[i].second;	
	}
	sort(arr.begin(),arr.end());
	cout << replacebuses(arr);
}

// 5
// 1 5
// 2 6
// 4 7
// 6 9
// 12 20