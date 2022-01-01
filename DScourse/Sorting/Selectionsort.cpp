
#include<bits/stdc++.h>
#define ll long long int
#define mod 1000000007
#define negmod(a) (a%mod + mod) % mod 
using namespace std;

int minindex(int arr[],int i, int j){
	if (i == j)
        return i;
    int k = minindex(arr, i + 1, j);
    return (arr[i] < arr[k])? i : k;
}

void recursiveselectionsort(int arr[],int n, int index = 0){
	if(index == n)
		return;
	// Finds the minimum index
	int minind = minindex(arr,index,n-1);
	// Checks the if both are different and then makes
	// the swap
	if(minind != index)
		swap(arr[index],arr[minind]);
	// Now we call our recursive function again with index + 1,
	// for ex - here index = 1;
	recursiveselectionsort(arr,n,index+1);
}

vector<int> largestLand(vector<vector<int>> houses){
	vector<int> answer(2,0);
	vector<pair<int,int>> arr;
	int len = houses.size();
	for (int i = 0; i < len; i++)
	{
		arr.push_back({houses[i][1],houses[i][0]});
	}
	sort(arr.begin(),arr.end());

	for (int i = 0; i < len; i++)
	{
		cout << arr[i].first << " " << arr[i].second << "\n";
	}

	int maxdiff = INT_MIN;

	for (int i = 0; i < len-1; i++)
	{
		if(maxdiff < abs(arr[i+1].first - arr[i].first)){
			maxdiff = abs(arr[i+1].first - arr[i].first);
			answer[0] = min(arr[i].second,arr[i+1].second);
			answer[1] = max(arr[i].second,arr[i+1].second);
		}
	}
	return answer;
}

void selectionsort(int arr[], int n){
	int i = 0;
	// This loops goes from 0 to n-2
	// and finds the minimum element at right side of 
	// this current index and swaps the values.
	while(i < n - 1){
		int mine = i;
		// Loop for finding minimum index 
		for (int j = i+1; j < n; j++)
		{
			if(arr[j] < arr[mine])
				mine = j;
		}
		// Swapping current with min index
		swap(arr[i],arr[mine]);
		i++;
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
	// recursiveselectionsort(sad,n);
	selectionsort(sad,n);
	for (int i = 0; i < n; i++)
	{
		cout << sad[i] << " ";
	}
}
 
