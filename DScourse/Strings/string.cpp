#include<bits/stdc++.h>
#define ll long long int
#define mod 1000000007
#define negmod(a) (a%mod + mod) % mod 
using namespace std;

void togglestringcase(string s){
	for (int i = 0; i < s.size(); i++)
	{
		if(s[i] >= 65 && s[i] <= 90)
			s[i] += 32;
		 else if(s[i] >= 97 && s[i] <= 122)
			s[i] -= 32;
	}
	cout << s << "\n";
}

void countwordsinastring(string s){
	int words = 1;
	for (int i = 1; i < s.size(); i++)
	{
		//handling multiple spaces also
		if(s[i] == ' ' && s[i] != s[i-1]){
			words++;
		}
	}
	cout << words << "\n";
}

void countconsonantsandvowels(string s){
	int consonantcount = 0;
	int vowelcount = 0;
	for (int i = 0; i < s.size(); i++)
	{
		if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U'){
			//it is vowel 
			vowelcount++;
		} else if((s[i] >= 65 && s[i] <= 91) || (s[i] >= 97 && s[i] <= 122)){
			// it is consonant
			consonantcount++;
		}
	}
	cout << vowelcount << " " << consonantcount << "\n";
}

void reverseString(string s){
	// rbegin returns a iterator to last element
	// rend returns a iterator to first element
	string t(s.rbegin(),s.rend());
	cout << t << "\n";
}

bool isPalindrome(string s){
	string t(s.rbegin(),s.rend());
	return t == s;
}

//comparing strings
void comparestrings(string s,string t){
	int i = 0;
	int j = 0;
	while(i < s.size() && j < t.size()){
		if(s[i] != t[j]) {
			if(s[i] > t[j]){
				cout << "T is smaller than S" << "\n";
				return;
			} else {
				cout << "S is smaller than T" << "\n";
				return;
			}
		}
		i++;
		j++;
	}
	cout << "Both are equal" << "\n";
}

void findingduplicatesinstring(string s){
	// we can use normal brute force array method
	for (int i = 0; i < s.size() - 1; i++)
	{
		if(s[i] != '#'){
			for(int j = i+1; j < s.size(); j++){
				if(s[i] == s[j]){
					s[j] == '#';
					cout << s[i] << "\n";
				}
			}
		}
	}

	// using character hash array
	vector<int> characters(26,0);
	//We are just considering the lowercase here
	// we can similarly apply same logic to uppercase
	//characters[s[i] - 'A']
	for (int i = 0; i < s.size(); i++)
	{
		characters[s[i] - 'a']++;
	}
	for (int i = 0; i < 26; i++)
	{
		if(characters[i] > 1)
			cout << (char)(i+97) << " " << characters[i] << "\n";
	}

	//we can also use bitwise operations
	//1.Masking(to check if a bit is set or not) &
	//2.Merging(to set a bit on) |
	//intially all bits are unset in h and X
	
	long int h = 0, x = 0;
	for (int i = 0; i < s.size(); i++)
	{
		x = 1;
		x = x << s[i] - 'a';
		if(x & h){
			// bit was set and duplicate is found
			cout << s[i] << "\n";
		} else {
			// bit was unset and we have to set it
			h = x | h;
		}
	}
}

bool ifstringsareanagram(string s,string t){
	//another method which works great for finding anagrams
	// is also bitwise operations but it only works when
	// there are no duplicates

	//they must be of same length 
	if(s.size() != t.size()){
		return false;
	}
	int len = s.size();
	//considering all are lowercase letters
	//create a hash array for storing count for characters
	vector<int> characters(26,0);

	for (int i = 0; i < len; i++)
	{
		characters[s[i]-'a']++;
	}
	for (int i = 0; i < len; i++)
	{
		characters[t[i]-'a']--;
		if(characters[t[i]-'a'] < 0){
			return false;
		}
	}
	// if it has come till this point then we are still not sure
	// because the characters array may have counts remaining
	// as 1 e.x- more duplicates of a character was present
	// in s than t
	for (int i = 0; i < 26; i++)
	{
		if(characters[i] != 0){
			return false;
		}
	}
	//strings are anagram
	return true;
}

void permutationofstring(string s,int k){
	static int A[10] = {0};
	static string res = s;
	int i = 0;
	if(k == s.size()){
		cout << res << "\n";
	} else {
		for (int i = 0; i < s.size(); i++)
		{
			if(A[i] == 0){
				res[k] = s[i];
				A[i] = 1;
				permutationofstring(s,k+1);
				A[i] = 0;
			}
		}
	}
}

void permutationofstringswapping(string s,int low,int high){
	if(low == high){
		cout << s << "\n";
	} else {
		for (int i = low; i <= high; i++)
		{
			swap(s[low],s[i]);
			permutationofstringswapping(s,low+1,high);
			swap(s[low],s[i]);
		}
		
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
	//Strings are just arrays of characters
	//characters always take 1 byte and are represented
	//using ASCII codes ranging from 0 to 127

	//Ways to declare a string
	char temp1[5] = {'s','a','d','e','\0'};
	char temp2[] = {'s','a','d','e','\0'};
	// char *temp3 = "Gojou";
	string s = "Jujutsu";
	// cout << temp3 << s << "\n";

	//finding length of string
	//In C++ it's very easy as strings are dynamic
	//we have size and length method 
	//In C we have to calculate it ourselves
	// int i;
	// for (i = 0; temp2[i] != '\0'; i++);
	// cout << i << "\n";

	// togglestringcase("SarVEsh");
	// countwordsinastring("How are you,  im fine");
	// reverseString("losttoboyi'mmanonhunt");
	// countconsonantsandvowels("SarVEsh123");
	// cout << isPalindrome("nitin") << "\n";
	// cout << isPalindrome("sarvesh") << "\n";
	// comparestrings("xarvesh","sarvesh");
	// findingduplicatesinstring("aarvesh");
	// cout << ifstringsareanagram("decimal","medical") << "\n";
	permutationofstring("sarv",0);
	permutationofstringswapping("sarv",0,3);
}

