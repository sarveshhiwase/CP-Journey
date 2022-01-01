#include<bits/stdc++.h>
#define ll long long int
#define mod 1000000007
#define negmod(a) (a%mod + mod) % mod 
using namespace std;

struct Array
{
	int *A;
	int size;
	int length;
	// Basic data about an array
};

void Display(struct Array arr){
	for (int i = 0; i < arr.length; i++)
	{
		cout << arr.A[i] << " ";
	}
	cout << "\n";
}

void getElement(struct Array arr,int index){
	if(index >= 0 && index < arr.length){
		cout << arr.A[index] << "\n";
		return;
	}
	cout << "Index is invalid" << "\n";
}

void setElement(struct Array *arr,int index,int value){
	if(index >= 0 && index < arr->length){
		arr->A[index] = value;
		return;
	}
	cout << "Index is invalid" << "\n";
}

void Append(struct Array *arr,int x){
	// Check if length does not exceed the size
	if(arr->length < arr->size){
		//Assign new value at last index + 1 i.e length
		arr->A[arr->length] = x;
		// Increase the length
		arr->length++;
	}
}

void insert(struct Array *arr ,int index ,int x){
	// Check if index is valid or not
	if(index >= 0 && index < arr->length){
		// Shift all the elements right to make space for new one
		for (int i = arr->length; i > index; i--)
		{
			arr->A[i] = arr->A[i-1];
		}
		// Assign the new value to index provided
		arr->A[index] = x;
		//Finally increase the length
		arr->length++;
	}
}

void Delete(struct Array *arr ,int index){
	// Check if index is valid or not
	if (index >= 0 && index < arr->length)
	{
		//Shift all elements to left
		for (int i = index; i < arr->length - 1; i++)
		{
			arr->A[i] = arr->A[i+1];
		}
		//Finally decrease the length as element is deleted
		arr->length--;
	}
}

void maxElement(struct Array arr){
	int max = arr.A[0];
	for (int i = 1; i < arr.length; i++)
	{
		if(arr.A[i] > max)
			max = arr.A[i];
	}
	cout << "Max element is " << max << "\n";
}

void minElement(struct Array arr){
	int min = arr.A[0];
	for (int i = 1; i < arr.length; i++)
	{
		if(arr.A[i] < min)
			min = arr.A[i];
	}
	cout << "Min element is " << min << "\n";
}

void makenegativeonleftandpositiveonright(struct Array *arr){
	int i = 0; // for negative elements checking
	int j = arr->length - 1; // for positive elements checking
	while(i < j){
		// increment i until we get to positive number
		while(arr->A[i] <= 0)
			i++;
		// decrement j until we get to negative number
		while(arr->A[j] > 0)
			j--;
		//If i and j are valid swap them
		if(i < j)
			swap(arr->A[i],arr->A[j]);
	}
}

bool checkarrayissorted(struct Array arr){
	for (int i = 0; i < arr.length - 1; i++)
	{
		if(arr.A[i+1] < arr.A[i])
			return false;
	}
	return true;
}

void rightrotate(struct Array *arr){
	//right rotate is like shift all elements to the right and save
	//the last element for first.
	ll last = arr->A[arr->length-1];
	for(ll i = arr->length-1; i > 0; i--){
		arr->A[i] = arr->A[i-1];
	}
	//After shifting make first equal to last.
	arr->A[0] = last;
}

void leftrotate(struct Array *arr){
	//left rotate is like shift all elements to the left and save
	//the first element for last.
	ll first = arr->A[0];
	for(ll i = 0; i < arr->length-1; i++){
		arr->A[i] = arr->A[i+1];
	}
	//After shifting make last equal to first.
	arr->A[arr->length-1] = first;
}

void rightshift(struct Array *arr){
	for(ll i = arr->length-1; i > 0; i--){
			arr->A[i] = arr->A[i-1];
	}
	arr->A[0] = 0;
}

void leftshift(struct Array *arr){
	for(ll i = 0; i < arr->length-1; i++){
		arr->A[i] = arr->A[i+1];
	}
	arr->A[arr->length-1] = 0;
}

void insertinsortedarray(struct Array *arr,int x){
	if(arr->length < arr->size){
		int i = arr->length - 1;
		while(i>= 0 && arr->A[i] > x){
			arr->A[i+1] = arr->A[i];
			i--;
		}
		arr->A[i+1] = x;
		arr->length++;
		cout << "Inserted" << "\n";
		return;
	}
	cout << "Array is full" << "\n";
	
}

void mergetwosortedarrays(ll arr1[],ll arr2[],int n,int m){
	ll arr[n+m];
	//Start of first array
	int p = 0;
	//Start of second array
	int q = 0;
	//start of third array
	int k = 0;
	//Start comparing at p and q 
	while(p < n && q < m){
		if(arr1[p] < arr2[q]){
			arr[k++] = arr1[p++];
		} else {
			arr[k++] = arr2[q++];
		}
	}
	//If there are remaining elements then insert them in new one
	while(p < n){
		arr[k++] = arr1[p++];
	}
	while(q < m){
		arr[k++] = arr2[q++];
	}
	for(int i = 0; i < n + m; i++){
		cout << arr[i] << " ";
	}
	cout << "\n";
}

int LinearSearch(struct Array *arr,int value){
	for (int i = 0; i < arr->length; i++)
	{
		if(arr->A[i] == value){
			//Transposition
			// swap(arr->A[i],arr->A[i-1]);
			// return i-1;
			//*********
			//Move to front
			swap(arr->A[i],arr->A[0]);
			return 0;
			//*********
			//Normal index search
			// return i;
		}
	}
	// If element is not found
	return -1;
}

int binarySearchIterative(struct Array arr,int start,int end,int k){
	// Check if end is always greater than or equal to start
	while(end >= start){
		//Get the middle of start and end
		int mid = (start + end)/2;
		//Is the element we want is at the middle
		if(arr.A[mid] == k){
			return mid;
		}
		//Decrease the end if arr[mid] is greater than k
		// which means it is lower half of the array
		if(arr.A[mid] > k){
			end = mid - 1;
		} else {
			//Increase the start if arr[mid] is smaller than k
		// which means it is upper half of the array
			start = mid + 1;
		}
	}
	return -1;
}

int RecursiveSum(struct Array arr,int end){
	//Sir's method
	if(end < 0)
		return 0;
	return  RecursiveSum(arr,end-1) + arr.A[end];

	//My Method
	// static int sum = 0;
	// if(start > end){
	// 	return sum;
	// }	
	// sum += arr.A[start];
	// return RecursiveSum(arr,start+1,end);
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
	// ll n;
	// cin >> n;
	// struct Array arr;
	// arr.A = new int[n]; // A will point to new array in heap,
	// to the first element
	// arr.size = n;
	// arr.length = 0;
	// ll elements = 0;
	// cin >> elements;
	// for (int i = 0; i < elements; i++)
	// {
	// 	cin >> arr.A[i];
	// }
	// arr.length = elements;
	// Append(&arr,45);
	// insert(&arr,3,85);
	// Delete(&arr,3);
	// Display(arr);
	// cout << LinearSearch(&arr,321) << "\n";
	// cout << binarySearchIterative(arr,0,3,456) << "\n";
	// cout << RecursiveSum(arr,3) << "\n";
	// maxElement(arr);
	// minElement(arr);
	// makenegativeonleftandpositiveonright(&arr);
	// insertinsortedarray(&arr,4);
	// insertinsortedarray(&arr,3);

	// Display(arr);
	ll arr1[4] = {1,5,9,13};
	ll arr2[6] = {3,6,8,12,15,16};
	mergetwosortedarrays(arr1,arr2,4,6);
}
