#include<bits/stdc++.h>
using namespace std;

struct minmax
{
	int max;
	int min;
};

void solve();

struct minmax findMaximum(int,int);

int main()
{
ios_base::sync_with_stdio(false);cin.tie(NULL);

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

struct minmax findMaximum(int arr[],int n){

	struct minmax m1;
	if(n == 1){
		m1.max = arr[0];
		m1.min = arr[0];
		return m1;
	} else if(n == 2){
		if(arr[0] < arr[1]){
			m1.max = arr[1];
			m1.min = arr[0];
		} else {
			m1.max = arr[0];
			m1.min = arr[1];
		}
		return m1;
	} else {
		m1.min = arr[0];
		m1.max = arr[1];
		
	}
		for(int i = 2; i < n; i++)
	    {
	        if (arr[i] > m1.max)    
	            m1.max = arr[i];
	             
	        else if (arr[i] < m1.min)    
	            m1.min = arr[i];
	    }
	
	return m1;
}

void solve()
{
	int n;
	cin >> n;
	int arr[n];
	for (int i = 0; i < n; i++)
	 {	
	 	cin >> arr[i];
	 } 
	 struct minmax m2 = findMaximum(arr, n);
     
    cout << "Min: "
         << m2.min << " ";
    cout << "Max: "
         << m2.max;
    cout << "\n";
}