#include<bits/stdc++.h>
using namespace std;

<<<<<<< HEAD
<<<<<<< HEAD
void solution(int N,int arr[]){
	long long int res = 0;
	for(int i = 0; i < N; i++){
		string t = to_string(arr[i]);
		char z = t[(int)t.size()-1];
		int j = t.size() - 2;
		int b = z - '0';
		string y = "";
		while(b--){
			y += t[j--];
		}
		string x = "";
		while(j >= 0){
			x += t[j--];
		}
		reverse(x.begin(),x.end());
		reverse(y.begin(),y.end());
		res += pow(stoi(x),stoi(y));
	}
	cout << res << '\n';
}

int main(){
	int arr[2] = {4122,2021};
	solution(2,arr);
	return 0;
}
=======
=======
>>>>>>> origin/master

int main()
{
	string s;
	getline(cin,s);
	int start = 0;
	int end;
	for (int i = 0; i < s.size(); i++)
	{
		if(s[i] == ' '){
			reverse(s.begin()+start,s.begin()+end);
			start = i + 1;
		} else {
			end = i;
		}
	}
	return 0;
}

<<<<<<< HEAD
>>>>>>> 0700be2a589f0acac8596fd9016f5007a6881eb9
=======
>>>>>>> origin/master
