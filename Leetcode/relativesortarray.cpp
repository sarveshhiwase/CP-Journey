#include<bits/stdc++.h>
#define ll long long int
#define mod 1000000007
#define negmod(a) (a%mod + mod) % mod 
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

while(t--)
{
	solve();
}

cerr<<"time taken : "<<(float)clock()/CLOCKS_PER_SEC<<" secs"<<endl;

return 0;
}

void solve()
{
	vector<int> arr1 = {2,3,1,3,2,4,6,7,9,2,19};
	vector<int> arr2 = {2,1,4,3,9,6};
	//Unoptimized code and messy and time complexity is O(n^2)
	vector<int> res;
        vector<int> tp(arr1.size(),0);
        for(int i = 0; i < arr2.size(); i++){
            int count = 0;
            for(int j = 0; j < arr1.size(); j++){
                if(arr2[i] == arr1[j]){
                    tp[j] = 1;
                    count++;
                }
            }
            for(int k = 0; k < count; k++){
                res.push_back(arr2[i]);
            }
        }
        vector<int> remaining;
        for(int i = 0; i < tp.size(); i++){
            if(tp[i] == 0){
                remaining.push_back(arr1[i]);
            }
        }
        sort(remaining.begin(),remaining.end());
        for(int i = 0; i < remaining.size(); i++){
            res.push_back(remaining[i]);
        }
        for(int i = 0; i < res.size(); i++){
        	cout << res[i] << " ";
        }
        cout << "\n";
	//Optimized Code and Time complexity is O(n);
        //map keeps elements sorted
	map<int,int>m;
        vector<int>v;
        //Get the count of all elements in first array
        for(int i=0;i<arr1.size();i++){
            m[arr1[i]]++;
        }
        //Iterate over second array and decrement the whole 
        //count till zero and add it to result array
        for(int i=0;i<arr2.size();i++){
                auto it=m.find(arr2[i]);
                while(it->second!=0){
                v.push_back(it->first);
                    it->second--;
                }
                //we delete arr2 elements from our map 
                //which boils upto remaining elements
                //in arr1;
                m.erase(m.find(arr2[i]));
        }
        //Now whose elements count was not zero were not present in
        //arr1
        for(auto x:m){
            while(x.second!=0){
                v.push_back(x.first);
                x.second--;
            }
        }
        for(int i = 0; i < v.size(); i++){
        	cout << res[i] << " ";
        }
        cout << "\n";
}
