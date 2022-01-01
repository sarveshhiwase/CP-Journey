#include<bits/stdc++.h>

using namespace std;

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
	int g;
	    cin >> g;
	    for (int i = 0; i < g; i++) {
	        int I,n,q;
	        cin >> I >> n >> q;
	        
	        if(I == 2){
	            int arr[n] = {1};
	            for (int j = 0; j < n; j++) {
	                for (int k = 0; k <= j; k++) {
	                    if(arr[k] == 1){
	                        arr[k] = 0;
	                    } else {
	                        arr[k] = 1;
	                    }
	                }
	            }
	            if(q == 2){
	                int count = 0;
	                for (int d = 0; d < n; d++) {
	                    if(arr[d] == 1){
	                        count++;
	                    }
	                }
	                cout << count << endl;
	            } else {
	                int count = 0;
	                for (int d = 0; d < n; d++) {
	                    if(arr[d] == 0){
	                        count++;
	                    }
	                }
	                cout << count << endl;
	            }
	        }
	            
	        else{
	            int arr[n] = {0};
	            for (int j = 0; j < n; j++) {
	                for (int k = 0; k <= j; k++) {
	                    if(arr[k] == 1){
	                        arr[k] = 0;
	                    } else {
	                        arr[k] = 1;
	                    }
	                }
	            }
	            if(q == 2){
	                int count = 0;
	                for (int d = 0; d < n; d++) {
	                    if(arr[d] == 1){
	                        count++;
	                    }
	                }
	                cout << count << endl;
	            } else {
	                int count = 0;
	                for (int d = 0; d < n; d++) {
	                    if(arr[d] == 0){
	                        count++;
	                    }
	                }
	                cout << count << endl;
	            }
	        }
	            
	        
	        
	    }
}



