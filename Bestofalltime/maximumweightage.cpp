//Goldman sachs

#include<bits/stdc++.h>
using namespace std;

int maxweight(vector<pair<string,int>> arr,int s,int e,int currlimit, int currscore){
	if(s > e){
		return currscore;
	}
	if(arr[s].first.size() + currlimit > 30){
		return currscore;
	}
	return max(maxweight(arr,s+1,e,currlimit + arr[s].first.size()+1,currscore+arr[s].second),maxweight(arr,s+1,e,currlimit,currscore));
}

int main(){
	int n;
	cin >> n;
	vector<pair<string,int>> arr(n);
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i].first >> arr[i].second;	
	}
	cout << maxweight(arr,0,n-1,0,0);
}

// 3
// aeronautics 3
// Telecommunication 5
// computer_science 6

