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
			replacecount++;
		}
		first = max(first,arr[i].first);
		second = max(second,arr[i].second);
	}
	return replacecount;
}

int maxweight(vector<pair<string,int>> arr,int s,int e,int currlimit, int currscore){
	if(s > e){
		return 0;
	}
	if(arr[s].first.size() + currlimit > 30){
		return currlimit;
	}
	return max(maxweight(arr,s+1,e,currlimit + arr[s].first.size(),currscore+arr[s].second),maxweight(arr,s+1,e,currlimit,currscore))
}

int main(){
	int n;
	cin >> n;
	vector<pair<int,int>> arr(n);
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i].first >> arr[i].second;	
	}
	sort(first.begin(),first.end());
	cout << replacebuses(arr);
}