#include<bits/stdc++.h>
#define add insert
#define pb push_back 
#define rep(start,n) for(int i = start; i < n; i++)
#define dis(x) cout << x << " "; 
#define disnew(x) cout << x << "\n"; 
#define negmod(a) (a%mod + mod) % mod 
using namespace std;

int lds(int input1,int input2[]){
    int maxlen = -1000000000;
    int len = 1;
    for (int i = 0; i < input1 - 1; i++)
    {
        len = 1;
        for(int j = i + 1; j < input1; j++){
            if(input2[j] < input2[i]){
                len++;
            }
        }
        maxlen = max(maxlen,len);
    }
    maxlen = max(maxlen,len);
    return maxlen;
}

// void greaternumber(string n){
//     int len = n.size();
//     int flag = 1;
//     for (int i = 0; i < len - 1; i++)
//     {
//         if(n[i] == n[i+1]){
//             flag = 0;
//         }
//     }
//     int carry = 0;
//     if(flag){
//         for(int i = len - 1; i > 0; i--){
//             if(abs((n[i] - '0') - (n[i-1] - '0')) == 1){
                
//             } else {
//                 n[i]
//             }
//         }
//     }
//     disnew(n)
// }

void subsequenceprint(int s[],int low,int high,int n){
    if(low == high){
        for (int i = 0; i < n; i++)
        {
            dis(s[i])   
        }
        disnew("")
    } else {
        for (int i = low; i <= high; i++)
        {
            swap(s[low],s[i]);
            subsequenceprint(s,low+1,high,n);
            swap(s[low],s[i]);
        }
        
    }
}

int longestonessubarray(vector<int>& arr){
    int len = arr.size();
    int thisonecount,thiszerocount;
    thisonecount = thiszerocount = 0;
    int maxlen = 0;
    int lastzerocount = 0;
    for (int i = 0; i < len; i++)
    {
        if(arr[i] == 1){
            thisonecount++;
        } else if(arr[i] == 0 && thiszerocount) {
            maxlen = max(maxlen,thisonecount);
            thisonecount -= lastzerocount;
            lastzerocount = thisonecount;
        } else {
            thiszerocount++;
            lastzerocount = thisonecount;
        }
    }
    maxlen = max(maxlen,thisonecount);
    if(thisonecount == len){
        maxlen--;
    }
    return maxlen;
}

long getSequenceSum(int i,int j,int k){
    int n1 = abs(j - i);
    long firstsum = (n1*(2*i + (n1-1)))/2;
    int n2 = abs(j - k);
    long secondsum = (n2*(2*j + -1 * (n2 - 1)))/2;
    return firstsum + secondsum + k;
}

bool validchar(char s){
    bool flag = true;
    if((s >= 65 && s <= 90) || (s >= 97 && s <= 122)){
        flag = true;
    } else if(s == '-' || s == ',' || s == '.' || s == '?' || s == '!') {
        flag = true;
    } else {
        flag = false;
    }
    return flag;
}

int howMany(string sentence){
    int len = sentence.size();
    string t = "";
    bool isvalid = true;
    int words = 0;
    for (int i = 0; i < len; i++)
    {
        if(sentence[i] == ' '){
            if(isvalid){
                words++;
            }
            t = "";
            isvalid = true;
        } else {
            if(!validchar(sentence[i])){
                isvalid = false;
            }
            t += sentence[i];
        }
    }
    if(isvalid){
        words++;
    }
    return words;
}

string rollTheString(string s,vector<int> roll){
    int len = s.size();
    int n = roll.size();

    for (int i = 0; i < n; i++)
    {
        for(int j = 0; j < roll[i]; j++){
            s[i] = (s[i] + 1) % 26;
        }   
    }
    return s;
}

// int maxweight(vector<pair<int,int>> arr,int s,int e,int currlimit, int currscore){ 
//     int &ans = dp[currlimit][currscore];
//     if(ans != -1){
//         return ans;
//     }
//     if(s > e){
//         return ans = currscore;
//     }
//     if(arr[s].first + currlimit > 30){
//         return ans = currscore;
//     }
//     return ans = max(maxweight(arr,s+1,e,currlimit + arr[s].first+1,currscore+arr[s].second),maxweight(arr,s+1,e,currlimit,currscore));
// }

int stringtointeger(string s){
    int len = s.size();
    int res = 0;
    int t = 1;
    for (int i = 0; i < len; i++)
    {
        res += (s[i] - '0') * t;
        t *= 10;
    }
    return res;
}

int binarytodecimal(string s,int start,int t){
    if(start < 0){
        return 0;
    } 
    int x = (s[start] - '0') * t;
    return x + binarytodecimal(s,start-1,t*2);  
}

int numOfRotation(string firststring,string secondstring){
    int c=0,x;
    for(int i=0;i<firststring.length();i++){
        x=0;
        for(int j=0;j<secondstring.length();j++){
            
            if(firststring[i]==secondstring[j]){
                i++;
                x++;
            }
            
                c=max(c,x);
        }
    }
    if(c==0){
        return -1;
    }else{
        return c;
    }
    
}



// int numofRotations(string firstString, string secondString)
// {
//     int len = secondString.size();
//     secondString += secondString;
//     int p,q;
//     p = q = 0;
//     int start = -1;
//     while(p < firstString.size() && q < secondString.size()){
//         if(firstString[p] == secondString[q]){
//             if(start == -1)
//                 start = q;
//             p++;
//             q++;
//         } else {
//             q++;
//         }
//     }
//     return min(start,len - start);
// }


void minnotes(int n){
    int x = n % 5;
    if(x & 1){
        cout << "5 coins: " << n/5 - 1 << "2 coins: " << (5 + x) / 2;
    } else {
        cout << "5 coins: " << n/5 << "2 coins: " << x / 2;
    }
}

void reversestring(string &s,int st,int e){
    while(st < e){
        swap(s[st],s[e]);
        st++;
        e--;
    }
}
 
int sumofprime(int a[],int size){
    //sieve of eratosthenes
    int h[1000000] = {0};
    for(int i=0;i<1000000;i++){
    h[i]=1;
    }
 
    h[0]=0;
    h[1]=0;

    for(int i=2;i*i<=1000000;i++){
        for(int j=i*i;j<=1000000;j+=i){
            h[j]=0;
        }
    }
    int sum=0;
    bool isallprime = true;
    for(int i=0;i<size;i++){
        if(h[a[i]]==0){
           sum+=a[i];
        }
    }
    return sum;
}

void reversealternatewords(string &s){
    int count = 0;
    int len = s.size();
    int st,e;
    st = e = 0;
    for (int i = 0; i < len; i++)
    {   
        if(s[i] == '.'){
            count++;
            if(count % 2 == 0){
                reversestring(s,st,e);
            }
            st = i+1;
        } else {
            e = i;
        }
    }
    count++;
    if(count % 2 == 0){
        reversestring(s,st,e);
    } 
}

vector<string> dictWords(string textInput){
    unordered_map<string,int> freqs;
    int len = textInput.size();
    string word = "";
    for (int i = 0; i < len; i++)
    {
        if(textInput[i] == ' '){
            freqs[word]++;
            word = "";
        } else {
            word += textInput[i];
        }
    }
    freqs[word]++;
    vector<string> res;
    for(auto j:freqs){
        if(j.second > 1){
            res.push_back(j.first);
        }
    }
    return res;
}

int convert(int N,string &str)
{
    // Write your code here.
    int len = N - 1;
    int res = 0;
    for(int i = 0; i < N; i++){
        if(str[i] == '1'){
            res += (int)pow(2,len);
        }
        len--;
    }
    return res;
}

int getKthLargest(vector<int> &arr, int k)
{
    vector<int> res;
    int sum = 0;
    for(int i = 0; i < arr.size() - 1; i++){
        res.push_back(arr[i]);
        sum += arr[i];
        for(int j = i + 1; j < arr.size(); j++){
            sum += arr[j];
            cout << sum << "\n";
            res.push_back(sum);
        }
        sum = 0;
    }
    res.push_back(arr[arr.size()-1]);
    sort(res.begin(),res.end(),greater<int> ());
    for(int i = 0; i < res.size(); i++){
        cout << res[i] << " ";
    }
    return res[k-1];
}

int divSum(int a)
{
	// Write your code here
    int sum = 0;
    for(int i = 1; i <= sqrt(a); i++){
        if(a % i == 0){
            if(a/i == i){
            	if(i < a)
                	sum += i;
            } else {
            	if(i < a)
            		sum += i;
            	if(a/i < a)
                	sum += a/i;
            }
        }
    }
    return sum == a;
}

void squarearray(int arr[],int n){
    // arr is sorted
    for (int i = 0; i < n; i++)
    {
        arr[i] *= arr[i];
    }
    int p = 0;
    int q = n - 1;
    while(q > 0){
        cout << p << " " << q << "\n";
        if(arr[p] * arr[p] > arr[q] * arr[q]){
            swap(arr[p],arr[q]);
        } 
        q--;
    }

    for (int i = 0; i < n; i++)
    {
        dis(arr[i])
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
    int arr[1] = {1};
    disnew(lds(1,arr))
}


// he is a good programmer, he won 865 competitions, but sometimes he dont. What do you think? All test-cases should pass. Done-done?


