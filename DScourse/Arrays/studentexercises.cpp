#include<bits/stdc++.h>
#define ll long long int
#define mod 1000000007
#define negmod(a) (a%mod + mod) % mod 
using namespace std;

//Question 1
//Finding single missing element in an sorted array
//For example array of first n natural numbers
// and you have to find a missing element
//Solution
//find sum of array elements and sum of first n numbers
//subtract the later one with earlier one
int missingelement(int arr[],int n){
	int originalsum = (n * (n + 1))/2;
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	return originalsum - sum;
}

//but what if you don't have sorted elements from 1 to n
//like [6,7,8,9,11,12,13];
// here we have to find missing element
int missingelementsecond(int arr[],int n){
	int missingelement = 0;
	//Sir's method
	// int low = arr[0];
	// int high = arr[n-1];
	// int diff = low;
	// for (int i = 1; i < n; i++)
	// {
	// 	if(arr[i] - i != diff){
	// 		missingelement = i + diff;
	// 		return missingelement;
	// 	}
	// }
	//My method
	for (int i = 0; i < n-1; i++)
	{
		if(arr[i+1] - arr[i] != 1){
			missingelement = arr[i] + 1;
			return missingelement;
		}
	}
	//Means no missing element
	return -1;
}

void multiplemissingelements(int arr[],int n){
	//array is sorted and there are multiple missing elements
	//Sir's method
	int low = arr[0];
	int high = arr[n-1];
	int diff = low;
	for (int i = 1; i < n; i++)
	{
		if(arr[i] - i != diff){
			while(diff < arr[i] - i){
				cout << i + diff << "\n";
				diff++;
			}
		}
	}
	//My method
	// for (int i = 0; i < n-1; i++)
	// {
	// 	if(arr[i+1] - arr[i] != 1){
	// 		int k = arr[i];
	// 		while(k != arr[i+1]){
	// 			k++;
	// 			cout << k << "\n";
	// 		}
	// 	}
	// }
}

void multiplemissingelementswithhashing(int arr[],int n){
	//Declare a hash array of size of max element in arr;
	int max_val = 0;
	int min_val = INT_MAX;
	for (int i = 0; i < n; i++)
	{
		min_val = min(arr[i],min_val);
		max_val = max(arr[i],max_val);
	}
	//1based indexing
	int hasharray[max_val+1] = {0};
	for (int i = 0; i < n; i++)
	{
		//Mark all the present elements in arr as 1 in hasharray
		hasharray[arr[i]] = 1;
	}
	//Printing missing elements from min to max
	for (int i = min_val; i < max_val+1; i++)
	{
		if(hasharray[i] == 0)
			cout << i << "\n";
	}
}

void duplicateelementsprint(int arr[],int n){
	//array is sorted
	int lastduplicate = -1;
	for (int i = 0; i < n - 1; i++)
	{
		if(arr[i] == arr[i+1] && lastduplicate != arr[i]){
			cout << arr[i] << "\n";
			lastduplicate = arr[i];
		}
	}
}

void duplicateelementswithcount(int arr[],int n){
	//array is sorted
	for (int i = 0; i < n-1; i++)
	{
		if(arr[i] == arr[i+1]){
			int j = i+1;
			while(arr[j] == arr[i]){
				j++;
			}
			cout << arr[i] << " " << j-i << "\n";
			i = j-1;
		}
	}
}

void duplicateelementswithhash(int arr[], int n){
	//Declare a hash array of size of max element in arr;
	int max_val = 0;
	int min_val = INT_MAX;
	for (int i = 0; i < n; i++)
	{
		min_val = min(arr[i],min_val);
		max_val = max(arr[i],max_val);
	}
	//1based indexing
	int hasharray[max_val+1] = {0};
	for (int i = 0; i < n; i++)
	{
		//Count all the present elements in arr, in hasharray
		hasharray[arr[i]]++;
	}
	//Printing duplicate elements from min to max
	for (int i = min_val; i < max_val+1; i++)
	{
		if(hasharray[i] > 1)
			//element with it's count
			cout << i << " " << hasharray[i] << "\n";
	}
}


void duplicateelementsunsorted(int arr[],int n){
	//Time complexity of O(n^2)
	//It would be more wise to use hashing here 
	// to get linear time 
	// we have already written that in duplicateelementswithhash
	for (int i = 0; i < n-1; i++)
	{
		int count = 1;
		if(arr[i] != -1){
			for(int j = i+1; j < n; j++){
				if(arr[i] == arr[j]){
					count++;
					arr[j] = -1;
				}
			}
			if(count > 1)
				cout << arr[i] << " " << count << "\n";
		}
	}
}

//Array is unsorted
void pairofelementswithsumk(int arr[],int n,int k){
	//Time complexity O(n^2)
	vector<pair<int,int>> indicesofpair;
	for (int i = 0; i < n; i++)
	{
		for(int j = i + 1; j < n; j++){
			if(arr[i] + arr[j] == k){
				indicesofpair.push_back({arr[i],arr[j]});
			}
		}
	}
	for (int i = 0; i < indicesofpair.size(); i++)
	{
		cout << indicesofpair[i].first << " " << indicesofpair[i].second << "\n";
	}

	//For linear time we can use hashing
	unordered_set<int> sums;
	for (int i = 0; i < n; i++)
	{
		if(sums.find(k - arr[i]) != sums.end()){
			cout << k - arr[i]  << " " << arr[i] << "\n";
		} 
		sums.insert(arr[i]);
	}
}

void pairofelementswithsumksorted(int arr[], int n, int k){
	//array is sorted
	//here we have to use two pointer technique
	int p = 0; 
	int q = n - 1;
	while(p < q){
		if(arr[p] + arr[q] == k){
			cout << arr[p] << " " << arr[q] << "\n";
			p++;
			q--;
		} else if(arr[p] + arr[q] > k){
			q--;
		} else {
			p++;
		}
	}
}

void minandmaxinsinglescan(int arr[],int n){
	int min = INT_MAX, max = 0;
	for (int i = 0; i < n; i++)
	{
		if(arr[i] < min){
		min = arr[i]; 
		} else if(arr[i] > max){
			max = arr[i];
		}
	}
	
	cout << max << " " << min << "\n";
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
	int arr[6] = {6,7,8,9,10,11};
	// cout << missingelementsecond(arr,6) << "\n";
	int arr2[8] = {3,8,4,5,9,12,7};
	// multiplemissingelements(arr2,8);
	// multiplemissingelementswithhashing(arr2,8);
	int arr3[8] = {1,2,2,2,4,5,5,5};
	// duplicateelementsprint(arr3,8);
	// duplicateelementswithcount(arr3,8);
	// duplicateelementswithhash(arr3,8);
	int arr4[5] = {3,3,1,2,5};
	// duplicateelementsunsorted(arr4,5);
	int arr5[5] = {1,3,2,2,5};
	// pairofelementswithsumk(arr5,5,4);
	int arr6[5] = {1,2,2,3,5};
	// pairofelementswithsumksorted(arr6,5,4);
	minandmaxinsinglescan(arr6,5);
}
