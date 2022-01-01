#include<bits/stdc++.h>
#define ll long long int
#define mod 1000000007
#define negmod(a) (a%mod + mod) % mod 
using namespace std;

//This is method 1,it works perfectly fine for distinct
// elements but not for duplicates
//Example arr1=[1,4,2,3,5], arr2=[1,4,4,2]
//This will not work we have to do better
bool isarraySubset(int arr1[],int arr2[],int n, int m){
	unordered_set<ll> s;
	for (ll i = 0; i < n; i++) {
		s.insert(arr1[i]);
	}
	ll p = s.size();
	for (ll i = 0; i < m; i++) {
		s.insert(arr2[i]);
	}
	if (s.size() == p) {
		return true;
	}
	return false;
}

//To overcome above mistake, we can implement hash table or 
// sorting 
//Using hash table is easy, we will first insert all 
// first array elements and then we will iterate over
// second array and decrease the frequency if the element
//was found with more than 0 else return 0
bool isSubset2(ll arr1[], ll arr2[],ll n, ll m)
{
    // Create a Frequency Table using STL
    map<int, int> frequency;
     
    // Increase the frequency of each element
    // in the frequency table.
    for (int i = 0; i < n; i++)
    {
        frequency[arr1[i]]++;
    }
    // Decrease the frequency if the
    // element was found in the frequency
    // table with the frequency more than 0.
    // else return 0 and if loop is
    // completed return 1.
    for (int i = 0; i < m; i++)
    {
        if (frequency[arr2[i]] > 0)
            frequency[arr2[i]]--;
        else
        {
            return false;
        }
    }
    return true;
}

//Sorting and merging, this solution is good and does not
// take much space
//first sort the both arrays
bool isSubset3(ll arr1[], ll arr2[],ll n, ll m){
	int i = 0, j = 0;
	if (m > n)
        return false;
	sort(arr1,arr1+n);
	sort(arr2,arr2+m);
	while(i < n && j < m){
		if(arr1[i] < arr2[j]){
			i++;
		} else if(arr1[i] == arr2[j]){
			i++;
			j++;
		} else {
			return false;
		}
	}
	return (j < m) ? false : true;
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
	//size of first and second array
	ll n,m;
	cin >> n >> m;
	ll arr1[n];
	ll arr2[m];
	for (int i = 0; i < n; i++)
	{
		cin >> arr1[i];
	}
	for (int i = 0; i < m; i++)
	{
		cin >> arr2[i];
	}
	cout << isSubset3(arr1,arr2,n,m) << "\n";
}
