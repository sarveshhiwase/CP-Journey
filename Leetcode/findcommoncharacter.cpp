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
	//Unoptimized Code and very messy 
	//Time complexity is O(n^2)

	// 	string A[3] = {"cool","lock","cook"};
	// //count of characters in a string
 //        unordered_map<char,int> sad;
 //        //Let's just count the character in first string
 //        for(int j = 0; j < A[0].size(); j++){
 //            sad[A[0][j]]++;      
 //        }
 //        vector<char> common;
 //        //Iterating over array of strings from second 
 //        // element
 //        for(auto k : sad){
 //            bool tp = true;
 //            ll count = k.second;
 //            for(int i = 1; i < 3; i++){
 //                bool iselement = false;
 //            //Iterating over a string
 //                ll countinanotherstring = 0;
 //                for(int j = 0; j < A[i].size(); j++){
 //                    if(A[i][j] == k.first){
 //                        iselement = true;
 //                        countinanotherstring++;
 //                    }
 //                }
 //                if(!iselement){
 //                    tp = false;
 //                    break;
 //                } else {
 //                	count = min(count,countinanotherstring);
 //                }
 //            }
 //            if(tp){
 //            	for (int i = 0; i < count; i++)
 //            	{
 //            		common.push_back(k.first);
 //            	}
 //            }      
 //        }
 //        for (int i = 0; i < common.size(); i++)
 //        {
 //        	cout << common[i] << "\n";
 //        }

	//Optimized and Time complexity O(n)
	//Taking global count array which will represent the whole
	// counts of all strings
		vector<int> cnt(26, INT_MAX);
        vector<string> res;
        //Iterating over a array of strings
        for(auto s: A)
        {
        	//Creating a temp array to count the characters
            vector<int> temp(26, 0);
            for(auto c : s)
                temp[c - 'a']++;
            //Take the min count between count global array and temp 
            // array
            // as we want min count in all possible strings
            for(int i = 0; i < 26; i++)
               cnt[i] = min(cnt[i], temp[i]);
                
        }
        //Iterate over count global array
        // add the string to result count[i] times
        for(int i = 0; i < 26; i++)
        {
            for(int j = 0; j < cnt[i]; j++)
                res.push_back(string(1, i + 'a'));
        }
        for (int i = 0; i < res.size(); i++)
        {
        	cout << res[i] << "\n";
        }
        
}
