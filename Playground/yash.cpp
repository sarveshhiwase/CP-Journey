#include<bits/stdc++.h>
using namespace std;

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