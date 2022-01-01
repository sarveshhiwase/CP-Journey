#include<bits/stdc++.h>
using namespace std;

int main(){
	string s;
	cin >> s;
	int len = s.size();
	unordered_map<int,vector<pair<char,int>> t;
	string temp;
	int x;
	char ch;
	vector<string> vs;
	
	for (int i = 0; i < n; i++)
	{
		if(s[i] == ','){
			vs.push_back(temp);
			temp = "";
		} else {
			temp += s[i];
		}
	}
	if(temp){
		vs.push_back(temp);
	}
	for (int i = 0; i < vs.size(); i++)
	{
		// temp length will always be 2
		x = temp[0] - '0';
		ch = temp[1];
		t[x].push_back(ch,i);
	}
	int count = 0;
	for(auto j:t){
		if(j.second.size() == 2){
			if(j.second[0].second - j.second[1].second <= 3){
				count++;
			}
		}
	}
	cout << count << "\n";
}